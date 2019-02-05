`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:06:28 06/03/2018 
// Design Name: 
// Module Name:    compare 
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

`define LESS 2'b00
`define EQUAL 2'b01
`define GREATER 2'b10
module compare(
	 input signed [31:0] a,
	 input signed [31:0] b,
	 output reg [1:0] res
	 //output isEqual
    );
	 always @(*)
		if(a == b) res = 2'b01;
		else if(a < b) res = 2'b00;
		else if(a > b) res = 2'b10;
	//assign isEqual = (a == b ? 1 : 0);

endmodule
