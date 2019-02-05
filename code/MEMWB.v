`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:40:12 06/03/2018 
// Design Name: 
// Module Name:    MEMWB 
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
module MEMWB(
    input clk,
	 input en,
	 input flush,
	 input [31:0] ALUResult_in,
	 input [31:0] DMemout_in,
	 input [4:0] RegWtaddr_in,
	 output [31:0] ALUResult_out,
	 output [31:0] DMemout_out,
	 output [4:0] RegWtaddr_out,
	 //control
	 input DMemtoReg_in,
	 input RegWrite_in,
	 output DMemtoReg_out,
	 output RegWrite_out
    );
	 dff dff1(clk,en,flush,ALUResult_in,ALUResult_out);
	 dff dff2(clk,en,flush,DMemout_in,DMemout_out);
	 dff #(5) dff3(clk,en,flush,RegWtaddr_in,RegWtaddr_out);
	
	 dff #(1) dff16(clk,en,flush,DMemtoReg_in,DMemtoReg_out);
	 dff #(1) dff17(clk,en,flush,RegWrite_in,RegWrite_out);
	/*
	always@(posedge clk)
	begin
		if(en) begin
			ALUResult_out <= ALUResult_in;
			DMemout_out <= DMemout_in;
		end
	end	
*/
endmodule
