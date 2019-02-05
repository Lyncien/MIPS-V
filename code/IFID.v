`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:10:03 06/01/2018 
// Design Name: 
// Module Name:    IFID 
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
module IFID(
    input clk,
	 input en,
	 input flush,
    input [31:0] PCPlus_in,
	 input [31:0] IMemout_in,
    output [31:0] PCPlus_out,
	 output [31:0] IMemout_out
    );
	 dff dff1(clk,en,flush,PCPlus_in,PCPlus_out);
	 dff dff2(clk,en,flush,IMemout_in,IMemout_out);
	 
	 
/*	always@(posedge clk)
	begin
		if(en) begin
			PCPlus_out <= PCPlus_in;
			IMemout_out <= IMemout_in;
		end
	end	*/

endmodule
