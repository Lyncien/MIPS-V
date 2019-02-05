`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:36:32 06/05/2018 
// Design Name: 
// Module Name:    hazard 
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
module hazard(//上一条指令是LW指令且当前指令ID级读的是同一个寄存器,则插入bubble
	 input [4:0] Rs_ID,
	 input [4:0] Rt_ID, 
	 input [4:0] RegWtaddr_EX,
	 input DMemRead_EX,
	 output PCEn,
	 output IF_ID_En,
	 output ID_EX_Flush
    );
	assign ID_EX_Flush = ((RegWtaddr_EX == Rs_ID) || (RegWtaddr_EX == Rt_ID)) && DMemRead_EX;//条件成立则为1，清空
	assign IF_ID_En = ~ID_EX_Flush;//条件成立则为0，保持
	assign PCEn = ~ID_EX_Flush;//条件成立则为0，保持

endmodule
