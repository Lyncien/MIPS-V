`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:22:09 06/03/2018 
// Design Name: 
// Module Name:    EXMEM 
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
module EXMEM(
    input clk,
	 input en,
	 input flush,
	 input [31:0] ALUResult_in,
	 input [31:0] DMemin_in,
	 input [4:0] RegWtaddr_in,
	 output [31:0] ALUResult_out,
	 output [31:0] DMemin_out,
	 output [4:0] RegWtaddr_out,
	 //control
	 input DMemRead_in,
	 input DMemWrite_in,
	 input DMemtoReg_in,
	 input RegWrite_in,
	 output DMemRead_out,
	 output DMemWrite_out,
	 output DMemtoReg_out,
	 output RegWrite_out
    );
	 dff dff1(clk,en,flush,ALUResult_in,ALUResult_out);
	 dff dff2(clk,en,flush,DMemin_in,DMemin_out);
	 dff #(5) dff3(clk,en,flush,RegWtaddr_in,RegWtaddr_out);

	 dff #(1) dff14(clk,en,flush,DMemRead_in,DMemRead_out);
	 dff #(1) dff15(clk,en,flush,DMemWrite_in,DMemWrite_out);
	 dff #(1) dff16(clk,en,flush,DMemtoReg_in,DMemtoReg_out);
	 dff #(1) dff17(clk,en,flush,RegWrite_in,RegWrite_out);


	/*always@(posedge clk)
	begin
		if(en) begin
			ALUResult_out <= ALUResult_in;
		end
	end	*/

endmodule
