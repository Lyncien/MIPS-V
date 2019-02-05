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
	input [4:0] rAddr1,//����ַ1
	output [31:0] rDout1,//������1
	input [4:0] rAddr2,//����ַ2
	output [31:0] rDout2,//������2
	input [4:0] wAddr,//д��ַ
	input [31:0] wDin,//д����
	input wEna//дʹ��
	
);
	reg [31:0] data [0:31];
	integer i;
	assign rDout1=data[rAddr1];//��1
	assign rDout2=data[rAddr2];//��2
	always@(posedge clk or negedge rst_n)//д�͸�λ
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