`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:39:18 06/04/2018 
// Design Name: 
// Module Name:    forward 
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
module forward(
	 input [4:0] Rs_EX,
	 input [4:0] Rt_EX,
    input RegWrite_MEM,
	 input RegWrite_WB,
    input [4:0] RegWtaddr_MEM,
	 input [4:0] RegWtaddr_WB,
	 output reg [1:0] RegRdout1Sel_Forward_EX,
	 output reg [1:0] RegRdout2Sel_Forward_EX
    );
	always @(*) begin
		RegRdout1Sel_Forward_EX[0] = RegWrite_WB && (RegWtaddr_WB != 0) && (RegWtaddr_MEM != Rs_EX) && (RegWtaddr_WB == Rs_EX);
		RegRdout1Sel_Forward_EX[1] = RegWrite_MEM && (RegWtaddr_MEM != 0) && (RegWtaddr_MEM == Rs_EX);
		RegRdout2Sel_Forward_EX[0] = RegWrite_WB && (RegWtaddr_WB != 0) && (RegWtaddr_MEM != Rt_EX) && (RegWtaddr_WB == Rt_EX);
		RegRdout2Sel_Forward_EX[1] = RegWrite_MEM && (RegWtaddr_MEM != 0) && (RegWtaddr_MEM == Rt_EX);	
	end
endmodule
