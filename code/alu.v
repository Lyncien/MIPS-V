`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:00:15 04/04/2018 
// Design Name: 
// Module Name:    alu 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`define A_NOP 5'd00 //nop
`define A_ADD 5'd01 //signed_add
`define A_SUB 5'd02 //signed_sub
`define A_AND 5'd03 //and
`define A_OR  5'd04 //or
`define A_XOR 5'd05 //xor
`define A_NOR 5'd06 //nor
`define A_ADDU 5'd07 //unsigned_add
`define A_SUBU 5'd08 //unsigned_sub
`define A_SLT 5'd09 //slt
`define A_SLTU 5'd10 //unsigned_slt
`define A_SLL 5'd11 //sll
`define A_SRL 5'd12 //srl
`define A_SRA 5'd13 //sra
`define A_MOV 5'd14 //movz,movn
`define A_LUI 5'd15 //lui
//`define A_SLT2 5'd15 //slt2
module alu(
    input [31:0] alu_a,//无符号型的，如果有负数，是以补码存储
    input [31:0] alu_b,
    input [4:0] alu_op,
    output reg [31:0] alu_out
	 //output zero
	 //output sign
    );
	//assign zero = (alu_out == 32'b0)?1:0;
	//assign sign = (alu_a[31] == 0 && alu_a != 32'b0)?1:0;
	always@(*)
		case (alu_op)
			`A_NOP: alu_out = 0;
			`A_ADD: alu_out = alu_a + alu_b;
			`A_SUB: alu_out = alu_a - alu_b;
			`A_AND: alu_out = alu_a & alu_b;
			`A_OR : alu_out = alu_a | alu_b;
			`A_XOR: alu_out = alu_a ^ alu_b;
			`A_NOR: alu_out = ~(alu_a | alu_b);
			`A_ADDU: alu_out = alu_a + alu_b;
			`A_SUBU: alu_out = alu_a - alu_b;
			`A_SLT: //a<b(signed) return 1 else return 0;
				begin
					if(alu_a[31] == alu_b[31]) alu_out = (alu_a < alu_b) ? 32'b1 : 32'b0;
					//对于不加signed的变量类型，运算和比较视为无符号，但依然可以存储有符号数，这里相当于自行根据首位判断
					//首位相等，即同号情况，直接比较，如果同正，后面31位大的，原数就大，如果同负，后面31位（补码）大的，依然是原数大
					else alu_out = (alu_a[31] < alu_b[31]) ? 32'b0 : 32'b1;//异号情况，直接比较符号
				end
			/*`A_SLT://法2：使用$signed()
				alu_out = ($signed(alu_a) < $signed(alu_b)) ? 32'b1 : 32'b0;*/
			`A_SLTU: alu_out = (alu_a < alu_b) ? 32'b1 : 32'b0;
			`A_SLL: alu_out = alu_b << alu_a;
			`A_SRL: alu_out = alu_b >> alu_a;
			`A_SRA: alu_out = $signed(alu_b) >>> alu_a;
			//使用>>>为算术右移，高位补符号，应该注意，如果是无符号数，>>>仍是逻辑右移，故应该$signed
			`A_MOV: alu_out = alu_b;//原样输出，相当于reg[rt],mov本不需要通过alu，但因为是RType格式，故统一
			`A_LUI: alu_out = alu_b << 16;
			default: ;
		endcase
endmodule
