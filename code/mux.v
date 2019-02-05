`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:03:35 04/25/2018 
// Design Name: 
// Module Name:    mux 
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
module mux #(parameter WIDTH = 32)(
    input sel,
    input [WIDTH-1:0] d0,
    input [WIDTH-1:0] d1,
    output [WIDTH-1:0] out
    );
	assign out = (sel == 1'b1 ? d1 : d0);
endmodule
