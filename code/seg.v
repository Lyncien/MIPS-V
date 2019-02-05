`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:19:58 12/10/2017 
// Design Name: 
// Module Name:    seg 
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
module seg(
		input clk,
		input rst_n,
		input [31:0] data32,
		output reg [3:0] sel,
		output reg [6:0] segments
    );
	integer clk_25=0;//4位数码管循环显示用
	integer clk_50000000=0;//2hz，移动显示用
	reg [1:0] cnt;
	reg [3:0] cnt2;
	reg [15:0] data16;//data32的16bit
	reg [3:0] data4;//data16的4bit
	reg [3:0] empty;//空白位
	always@(*)//组合逻辑，控制七段数码管
		begin
			if(!rst_n)
				segments = 7'b000_0000;
			else
				case(data4)
					0: segments =       ~7'b011_1111;//0
					1: segments =       ~7'b000_0110;//1
					2: segments =       ~7'b101_1011;//2
					3: segments =       ~7'b100_1111;//3
					4: segments =       ~7'b110_0110;//4
					5: segments =       ~7'b110_1101;//5
					6: segments =       ~7'b111_1101;//6
					7: segments =       ~7'b000_0111;//7
					8: segments =       ~7'b111_1111;//8
					9: segments =       ~7'b110_1111;//9
					10:segments =       ~7'b111_0111;//A
					11:segments =       ~7'b111_1100;//b
					12:segments =       ~7'b011_1001;//C
					13:segments =       ~7'b101_1110;//d
					14:segments =       ~7'b111_1001;//E
					15:segments =       ~7'b111_0001;//F
					default: segments = 7'b000_0000; // required
				endcase
		end
		
	always@(posedge clk)//时序逻辑，产生位选择信号段选择信号
		begin
			//if(!rst_n)
				//cnt = 2'b00;
			//else 
				if(clk_25==400000)
					begin
						clk_25=0;
						cnt = cnt + 2'b01;
					end
				else
					clk_25=clk_25+1;
					
				if(clk_50000000==50000000)//
					begin
						clk_50000000=0;
						cnt2=cnt2+1;
						if(cnt2==4'b1010) cnt2=4'b0000;
					end
				else
					clk_50000000=clk_50000000+1;
			end


	always@(*)//组合逻辑，选择当前显示段
		begin
			case(cnt2)
				4'b0000:begin data16={8'bzzzzzzzz,data32[31:24]}; empty=4'b1100; end
				4'b0001:begin data16={4'bzzzz,data32[31:20]}; empty=4'b1000; end
				4'b0010:begin data16=data32[31:16]; empty=4'b0000; end
				4'b0011:begin data16=data32[27:12]; empty=4'b0000; end
				4'b0100:begin data16=data32[23:8]; empty=4'b0000; end
				4'b0101:begin data16=data32[19:4]; empty=4'b0000; end
				4'b0110:begin data16=data32[15:0]; empty=4'b0000; end
				4'b0111:begin data16={data32[11:0],4'bzzzz}; empty=4'b0001; end
				4'b1000:begin data16={data32[7:0],8'bzzzzzzzz}; empty=4'b0011; end
				4'b1001:begin data16={data32[3:0],8'bzzzzzzzz,data32[31:28]}; empty=4'b0110; end
				default:;
			endcase
		end
			
	always@(*)//组合逻辑，选择当前显示位
		begin
			case(cnt)
				2'b00:sel=4'b1110 | empty;
				2'b01:sel=4'b1101 | empty;
				2'b10:sel=4'b1011 | empty;
				2'b11:sel=4'b0111 | empty;
				default:sel=4'b1110;
			endcase
		end
		
	always@(*)//组合逻辑，选择当前显示位的数据
		begin
			case(cnt)
				2'b00:data4=data16[3:0];
				2'b01:data4=data16[7:4];
				2'b10:data4=data16[11:8];
				2'b11:data4=data16[15:12];
				default:data4=16'b0;
			endcase
		end	
endmodule