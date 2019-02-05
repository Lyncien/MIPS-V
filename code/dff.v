`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:14:16 05/02/2018 
// Design Name: 
// Module Name:    dff 
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
module dff #(parameter WIDTH = 32) ( //Data Flip-Flop 
    input clk,
	 input en,
	 input rst,
    input [WIDTH-1:0] datain,
    output reg [WIDTH-1:0] dataout
    );
	always@(posedge clk)
	begin
		if(rst)
			dataout <= 0;
		else if(en)
			dataout <= datain;
	end
endmodule
