`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:57:54 05/31/2018
// Design Name:   alu
// Module Name:   C:/Users/Adminstrator/Desktop/COD Lab7/MIPS CPU/PipelineCPU/alutest.v
// Project Name:  PipelineCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
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
module alutest;

	// Inputs
	reg [31:0] alu_a;
	reg [31:0] alu_b;
	reg [4:0] alu_op;

	// Outputs
	wire [31:0] alu_out;
	//wire zero;
	//wire sign;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.alu_a(alu_a), 
		.alu_b(alu_b), 
		.alu_op(alu_op), 
		.alu_out(alu_out)
	);

	initial begin
		// Initialize Inputs
		alu_op = 5'd09; //≤‚ ‘slt
		alu_a = 2;
		alu_b = 3; 
		#10;
		alu_a = 3;
		alu_b = 2;
		#10;
		alu_a = -2;
		alu_b = -3;
		#10;
		alu_a = -3;
		alu_b = -2;
		// Wait 100 ns for global reset to finish
		#20;
		alu_op = 5'd10; //≤‚ ‘slt2  
		alu_a = 2;
		alu_b = 3;
		#10;
		alu_a = 3;
		alu_b = 2;
		#10;
		alu_a = -2;
		alu_b = -3;
		#10;
		alu_a = -3;
		alu_b = -2;
		
		// Add stimulus here
		#10;
		alu_op = 5'd0;
		alu_a = 0;
		alu_b = {{6'b110011},{`A_SLTU},{6'b010101}};
		#10;
		alu_op = `A_SUBU;
		alu_a = 32'b10000000_00000000_00000000_00000000;
		alu_b = 32'b11111111_11111111_11111111_11111111;
		
	end 
      
endmodule

