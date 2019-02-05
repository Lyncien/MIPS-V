`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:16:24 04/07/2018 
// Design Name: 
// Module Name:    regfile 
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
module regfile(
	input	clk,
	input rst_n,
	input [4:0] rAddr1,//读地址1
	output [31:0] rDout1,//读数据1
	input [4:0] rAddr2,//读地址2
	output [31:0] rDout2,//读数据2
	input [4:0] wAddr,//写地址
	input [31:0] wDin,//写数据
	input wEna//写使能
	
);
	reg [31:0] data [0:31];
	integer i;
	assign rDout1=data[rAddr1];//读1
	assign rDout2=data[rAddr2];//读2
	always@(posedge clk or negedge rst_n)//写和复位
		if(~rst_n)
		begin
			//data[0]=0;
			//data[1]=0;
			for(i=0; i<32; i=i+1) data[i]<=0;
		end
		else
		begin
			if(wEna)
				data[wAddr]<=wDin;
		end
endmodule
