`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:42:33 04/25/2018 
// Design Name: 
// Module Name:    top 
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
module top(
	input clk,
//	input rst,

/*
output tALUSrcASel_ID,
output tALUSrcASel_EX,
output [1:0] tALUSrcBSel_ID,
output [1:0] tALUSrcBSel_EX,
output [31:0] tALUSrcA_EX,
output [31:0] tALUSrcB_EX,
output [4:0] tALUControl_ID,
output [4:0] tALUControl_EX,
output [31:0] tALUResult_EX,
output [31:0] tALUResult_MEM,
output [31:0] tALUResult_WB,
output [1:0] tRsCMPZero,
output [1:0] tRsCMPRt,
output [31:0] tIMMSignExtended_ID,
output [31:0] tIMMSignExtended_EX,
output [31:0] tIMMZeroExtended_ID,
output [31:0] tIMMZeroExtended_EX,
output [31:0] tShamtZeroExtended_ID,
output [31:0] tShamtZeroExtended_EX,
output [1:0] tRegRdout1Sel_Forward_EX,
output [1:0] tRegRdout2Sel_Forward_EX,
output [31:0] tRegRdout1_Forward_EX,
output [31:0] tRegRdout2_Forward_EX,
output [4:0] tRegRdaddr1_ID,
output [31:0] tRegRdout1_ID,
output [31:0] tRegRdout1_EX,
output [4:0] tRegRdaddr2_ID,
output [31:0] tRegRdout2_ID,
output [31:0] tRegRdout2_EX,
output [4:0] tRegWtaddr_ID,
output [4:0] tRegWtaddr_EX,
output [4:0] tRegWtaddr_MEM,
output [4:0] tRegWtaddr_WB,
output [31:0] tRegWtin_WB,
output tRegWrite_ID,
output tRegWrite_EX,
output tRegWrite_MEM,
output tRegWrite_WB,
output tRegDst_ID,
//output [31:0] tIMemaddr_src,
output [31:0] tIMemaddr,
output [31:0] tIMemout,
output [31:0] tDMemaddr_MEM,
output [31:0] tDMemin_MEM,
output tDMemRead_MEM,
output [31:0] tDMemout_MEM,
output [31:0] tDMemout_WB,
output tDMemWrite_MEM,
output tDMemtoReg_EX,
output tDMemtoReg_MEM,
output tDMemtoReg_WB,
output [31:0] tPC,
output [31:0] tPCPlus_IF,
output [31:0] tPCPlus_ID,
output [31:0] tPCPlus_EX,
output [31:0] tEPC,
output [31:0] tnextPC,
output tPCEn,
output [1:0] tPCSrc_ID,
output tIF_ID_En,
output tIF_ID_Flush,
output tID_EX_Flush,
output [31:0] tPCJump_ID,
output [31:0] tPCJR_ID,
output [31:0] tPCBranch_ID,
output [31:0] tInstr,
output [5:0] tFunct,
output [4:0] tShamt,
output [15:0] tIMM16,
output [4:0] tRd,
output [4:0] tRt,
output [4:0] tRs,
output [5:0] tOp,
output [4:0] tRt_EX,
output [4:0] tRs_EX,
output [25:0] tJumpIMM,
output [31:0] tIMMSignExtendedShiftLeft2,
*/
    input [7:0] sw,
    output [6:0] seg7,
    output [3:0] an,
	 output [0:0] Led,
	 input btnr,btnl,btns,btnd,btnu

	);
	
	/*
assign tALUSrcASel_ID = ALUSrcASel_ID;
assign tALUSrcASel_EX = ALUSrcASel_EX;
assign tALUSrcBSel_ID = ALUSrcBSel_ID;
assign tALUSrcBSel_EX = ALUSrcBSel_EX;
assign tALUSrcA_EX = ALUSrcA_EX;
assign tALUSrcB_EX = ALUSrcB_EX;
assign tALUControl_ID = ALUControl_ID;
assign tALUControl_EX = ALUControl_EX;
assign tALUResult_EX = ALUResult_EX;
assign tALUResult_MEM = ALUResult_MEM;
assign tALUResult_WB = ALUResult_WB;
assign tRsCMPZero = RsCMPZero;
assign tRsCMPRt = RsCMPRt;
assign tIMMSignExtended_ID = IMMSignExtended_ID;
assign tIMMSignExtended_EX = IMMSignExtended_EX;
assign tIMMZeroExtended_ID = IMMZeroExtended_ID;
assign tIMMZeroExtended_EX = IMMZeroExtended_EX;
assign tShamtZeroExtended_ID = ShamtZeroExtended_ID;
assign tShamtZeroExtended_EX = ShamtZeroExtended_EX;
assign tRegRdout1Sel_Forward_EX = RegRdout1Sel_Forward_EX;
assign tRegRdout2Sel_Forward_EX = RegRdout2Sel_Forward_EX;
assign tRegRdout1_Forward_EX = RegRdout1_Forward_EX;
assign tRegRdout2_Forward_EX = RegRdout2_Forward_EX;
assign tRegRdaddr1_ID = RegRdaddr1_ID;
assign tRegRdout1_ID = RegRdout1_ID;
assign tRegRdout1_EX = RegRdout1_EX;
assign tRegRdaddr2_ID = RegRdaddr2_ID;
assign tRegRdout2_ID = RegRdout2_ID;
assign tRegRdout2_EX = RegRdout2_EX;
assign tRegWtaddr_ID = RegWtaddr_ID;
assign tRegWtaddr_EX = RegWtaddr_EX;
assign tRegWtaddr_MEM = RegWtaddr_MEM;
assign tRegWtaddr_WB = RegWtaddr_WB;
assign tRegWtin_WB = RegWtin_WB;
assign tRegWrite_ID = RegWrite_ID;
assign tRegWrite_EX = RegWrite_EX;
assign tRegWrite_MEM = RegWrite_MEM;
assign tRegWrite_WB = RegWrite_WB;
assign tRegDst_ID = RegDst_ID;
//assign tIMemaddr_src = IMemaddr_src;
assign tIMemaddr = IMemaddr;
assign tIMemout = IMemout;
assign tDMemaddr_MEM = DMemaddr_MEM;
assign tDMemin_MEM = DMemin_MEM;
assign tDMemRead_MEM = DMemRead_MEM;
assign tDMemout_MEM = DMemout_MEM;
assign tDMemout_WB = DMemout_WB;
assign tDMemWrite_MEM = DMemWrite_MEM;
assign tDMemtoReg_EX = DMemtoReg_EX;
assign tDMemtoReg_MEM = DMemtoReg_MEM;
assign tDMemtoReg_WB = DMemtoReg_WB;
assign tPC = PC;
assign tPCPlus_IF = PCPlus_IF;
assign tPCPlus_ID = PCPlus_ID;
assign tPCPlus_EX = PCPlus_EX;
assign tEPC = EPC;
assign tnextPC = nextPC;
assign tPCEn = PCEn;
assign tPCSrc_ID = PCSrc_ID;
assign tIF_ID_En = IF_ID_En;
assign tIF_ID_Flush = IF_ID_Flush;
assign tID_EX_Flush = ID_EX_Flush;
assign tPCJump_ID = PCJump_ID;
assign tPCJR_ID = PCJR_ID;
assign tPCBranch_ID = PCBranch_ID;
assign tInstr = Instr;
assign tFunct = Funct;
assign tShamt = Shamt;
assign tIMM16 = IMM16;
assign tRd = Rd;
assign tRt = Rt;
assign tRs = Rs;
assign tOp = Op;
assign tRt_EX = Rt_EX;
assign tRs_EX = Rs_EX;
assign tJumpIMM = JumpIMM;
assign tIMMSignExtendedShiftLeft2 = IMMSignExtendedShiftLeft2;	
	*/
	
	//_后缀表示该信号所在的流水段
	
	wire ALUSrcASel_ID;
	wire ALUSrcASel_EX;
	wire [1:0] ALUSrcBSel_ID;//alu B在regout2和imm之间选择
	wire [1:0] ALUSrcBSel_EX;
	wire [31:0] ALUSrcA_EX;
	wire [31:0] ALUSrcB_EX;
	wire [4:0] ALUControl_ID;
	wire [4:0] ALUControl_EX;
	wire [31:0] ALUResult_EX;
	wire [31:0] ALUResult_MEM;
	wire [31:0] ALUResult_WB;
	
	wire [1:0] RsCMPZero;
	wire [1:0] RsCMPRt;
	
	wire [31:0] IMMSignExtended_ID;
	wire [31:0] IMMSignExtended_EX;
	wire [31:0] IMMZeroExtended_ID;
	wire [31:0] IMMZeroExtended_EX;	
	wire [31:0] ShamtZeroExtended_ID;
	wire [31:0] ShamtZeroExtended_EX;	

	
	wire [1:0] RegRdout1Sel_Forward_EX;//旁路单元产生的选择信号
	wire [1:0] RegRdout2Sel_Forward_EX;
	wire [31:0] RegRdout1_Forward_EX;//旁路数据
	wire [31:0] RegRdout2_Forward_EX;
	
	wire [4:0] RegRdaddr1_ID;
	wire [31:0] RegRdout1_ID;
	wire [31:0] RegRdout1_EX;
	wire [4:0] RegRdaddr2_ID;
	wire [31:0] RegRdout2_ID;
	wire [31:0] RegRdout2_EX;
	wire [4:0] RegWtaddr_ID;
	wire [4:0] RegWtaddr_EX;	
	wire [4:0] RegWtaddr_MEM;
	wire [4:0] RegWtaddr_WB;
	wire [31:0] RegWtin_WB;
	wire RegWrite_ID;
	wire RegWrite_EX;
	wire RegWrite_MEM;
	wire RegWrite_WB;
	wire RegDst_ID;

	//wire [31:0] IMemaddr_src;
	wire [31:0] IMemaddr;
	wire [31:0] IMemout;
	
	wire [31:0] DMemaddr_MEM;
	wire [31:0] DMemin_MEM;
	wire DMemRead_MEM;
	wire [31:0] DMemout_MEM;
	wire [31:0] DMemout_WB;
	wire DMemWrite_MEM;
	wire DMemtoReg_EX;
	wire DMemtoReg_MEM;
	wire DMemtoReg_WB;
	
	
	wire [31:0] PC;
	wire [31:0] PCPlus_IF;
	wire [31:0] PCPlus_ID;
	wire [31:0] PCPlus_EX;
	wire [31:0] EPC;
	wire [31:0] nextPC;
	wire PCEn;
	wire [1:0] PCSrc_ID;//Control输出的，0:+4,1:Branch,2:J,3:JR
	//wire PCSel_ID;
	wire IF_ID_En;
	wire IF_ID_Flush;
	wire ID_EX_Flush;
	
	
	wire [31:0] PCJump_ID;
	wire [31:0] PCJR_ID;
	wire [31:0] PCBranch_ID;
	
	wire [31:0] Instr;	
	wire [5:0] Funct;
	wire [4:0] Shamt;
	wire [15:0] IMM16;
	wire [4:0] Rd;
	wire [4:0] Rt;
	wire [4:0] Rs;
	wire [5:0] Op;
	wire [4:0] Rt_EX;//为了旁路判断
	wire [4:0] Rs_EX;//为了旁路判断

	wire [25:0] JumpIMM;
	wire [31:0] IMMSignExtendedShiftLeft2;
	



	wire btns_d;
	debounce	debounce(clk,btns,btns_d);//中键去抖动
	reg rst;
	assign Led = rst;
	always @(posedge btns_d) rst=~rst;
	//--------------regfile_copy_DMem是DMem的一份复制--------------
	wire [4:0] addr_show;
	wire [31:0] out_show;
	assign addr_show = sw;//开关输输入要显示的地址
	seg seg1(clk,1'b1,out_show,an,seg7);//显示数据
	regfile_copy_DMem regfile_copy_DMem(clk,~rst,addr_show,out_show,DMemaddr_MEM >> 2,DMemin_MEM,DMemWrite_MEM);
	//---------------方便显示内存-------------------------






	
	//=======================IF========================
		

	mux4 MUXPC(
		.sel(PCSrc_ID),
		.d0(PCPlus_IF),//+4直接用IF的
		.d1(PCBranch_ID),
		.d2(PCJump_ID),
		.d3(PCJR_ID),
		.out(nextPC)
	);
	dff DFFPC(
		.clk(~clk),//下降沿更新PC
		.en(PCEn),
		.rst(rst),
		.datain(nextPC),
		.dataout(PC)
	);	
	
	alu ALUPCPlus(PC,4,5'd01,PCPlus_IF);
	
	assign IMemaddr = PC >> 2;//>>2是因为这里IMem是每个地址存储4字节，和实际上的（一地址一字节）不一样
	IMem IMem(clk,1'b0,IMemaddr,32'b0,IMemout);//上升沿读指令
	
	
	//======================IFID========================
	IFID IFID(
		.clk(~clk),
		.en(IF_ID_En),
		.flush(IF_ID_Flush || rst),
		.PCPlus_in(PCPlus_IF),
		.IMemout_in(IMemout),
		.PCPlus_out(PCPlus_ID),
		.IMemout_out(Instr)
	);
	//=======================ID==========================
	assign JumpIMM = Instr[25:0];
	assign Funct = Instr[5:0];
	assign Shamt = Instr[10:6];
	assign IMM16 = Instr[15:0];
	assign Rd = Instr[15:11];
	assign Rt = Instr[20:16];
	assign Rs = Instr[25:21];
	assign Op = Instr[31:26];
	
	//*******Control*******
	control control(
		//in
		.clk(clk),
		.rst(rst),
		.Op(Op),
		.Rt(Rt),
		.Funct(Funct),
		.RsCMPRt(RsCMPRt),
		.RsCMPZero(RsCMPZero),
		//out
		.PCSrc(PCSrc_ID), 
		//ID
		.RegDst(RegDst_ID),
		//EX
		.ALUSrcASel(ALUSrcASel_ID),
		.ALUSrcBSel(ALUSrcBSel_ID), 
		.ALUControl(ALUControl_ID),
		//MEM
		.DMemRead(DMemRead_ID),
		.DMemWrite(DMemWrite_ID),
		//WB
		.DMemtoReg(DMemtoReg_ID),
		.RegWrite(RegWrite_ID)
	);

	//*******Control*******
	
	assign RegRdaddr1_ID = Rs;
	assign RegRdaddr2_ID = Rt;
	mux #(5) MUXRegWtaddr(RegDst_ID,Rt,Rd,RegWtaddr_ID);
	
	
	assign ShamtZeroExtended_ID = {{27{1'b0}},Shamt};
	assign IMMSignExtended_ID = {{16{IMM16[15]}},IMM16};
	assign IMMZeroExtended_ID = {{16{1'b0}},IMM16};
	
	assign IMMSignExtendedShiftLeft2 = IMMSignExtended_ID << 2;
	alu BranchALU(PCPlus_ID,IMMSignExtendedShiftLeft2,5'd01,PCBranch_ID);
	assign PCJump_ID = {{PCPlus_ID[31:28]},{{2'b00,JumpIMM}<<2}};
	assign PCJR_ID = RegRdout1_ID;
	
	//assign PCSel_ID = (PCSrc_ID == 2'b01 ? PCSrc_ID : PCSrc_ID);//是Branch的时候判断是否真的满足跳转
	
	assign IF_ID_Flush = (PCSrc_ID != 2'b00);//有跳转则清空IF_ID寄存器
	
	regfile regfile(clk,~rst,RegRdaddr1_ID,RegRdout1_ID,RegRdaddr2_ID,RegRdout2_ID,RegWtaddr_WB,RegWtin_WB,RegWrite_WB);
	
	compare compare1(RegRdout1_ID,RegRdout2_ID,RsCMPRt);//for beq,bne
	compare compare2(RegRdout1_ID,0,RsCMPZero);//for movz,movn,blez,bgtz,bltz,bgez
	
	
	hazard hazard(Rs,Rt,RegWtaddr_EX,DMemRead_EX,PCEn,IF_ID_En,ID_EX_Flush);
	//======================IDEX=========================
	IDEX IDEX(
		.clk(~clk),
		.en(1'b1),	
		.flush(ID_EX_Flush || rst),
		//data
		//in
		.PCPlus_in(PCPlus_ID),
		.RegRdout1_in(RegRdout1_ID),
		.RegRdout2_in(RegRdout2_ID),
		.IMMSignExtended_in(IMMSignExtended_ID),
		.IMMZeroExtended_in(IMMZeroExtended_ID),
		.ShamtZeroExtended_in(ShamtZeroExtended_ID),
		.Rs_in(Rs),
		.Rt_in(Rt),
		.RegWtaddr_in(RegWtaddr_ID),
		//out
		.PCPlus_out(PCPlus_EX),
		.RegRdout1_out(RegRdout1_EX),
		.RegRdout2_out(RegRdout2_EX),
		.IMMSignExtended_out(IMMSignExtended_EX),
		.IMMZeroExtended_out(IMMZeroExtended_EX),
		.ShamtZeroExtended_out(ShamtZeroExtended_EX),
		.Rs_out(Rs_EX),
		.Rt_out(Rt_EX),
		.RegWtaddr_out(RegWtaddr_EX),
		
		//control sign
		//in
		.RegDst_in(RegDst_ID),
		.ALUSrcASel_in(ALUSrcASel_ID),
		.ALUSrcBSel_in(ALUSrcBSel_ID), 
		.ALUControl_in(ALUControl_ID),
		.DMemRead_in(DMemRead_ID),
		.DMemWrite_in(DMemWrite_ID),
		.DMemtoReg_in(DMemtoReg_ID),
		.RegWrite_in(RegWrite_ID),
		//out
		.RegDst_out(RegDst_EX),
		.ALUSrcASel_out(ALUSrcASel_EX),
		.ALUSrcBSel_out(ALUSrcBSel_EX), 
		.ALUControl_out(ALUControl_EX),
		.DMemRead_out(DMemRead_EX),
		.DMemWrite_out(DMemWrite_EX),
		.DMemtoReg_out(DMemtoReg_EX),
		.RegWrite_out(RegWrite_EX)
	);
	//========================EX=========================
	forward forward(Rs_EX,Rt_EX,RegWrite_MEM,RegWrite_WB,RegWtaddr_MEM,RegWtaddr_WB,RegRdout1Sel_Forward_EX,RegRdout2Sel_Forward_EX);
	mux4 MUXRegRdout1FW(RegRdout1Sel_Forward_EX,RegRdout1_EX,RegWtin_WB,ALUResult_MEM,0,RegRdout1_Forward_EX);//forward
	mux4 MUXRegRdout2FW(RegRdout2Sel_Forward_EX,RegRdout2_EX,RegWtin_WB,ALUResult_MEM,0,RegRdout2_Forward_EX);//forward
	mux MUXALUSrcA(ALUSrcASel_EX,RegRdout1_Forward_EX,ShamtZeroExtended_EX,ALUSrcA_EX);
	mux4 MUXALUSrcB(ALUSrcBSel_EX,RegRdout2_Forward_EX,IMMSignExtended_EX,IMMZeroExtended_EX,0,ALUSrcB_EX);
	alu alu(ALUSrcA_EX,ALUSrcB_EX,ALUControl_EX,ALUResult_EX);
	//======================EXMEM========================
	EXMEM EXMEM(
		.clk(~clk),
		.en(1'b1),
		.flush(rst),
		//data
		//in
		.ALUResult_in(ALUResult_EX),
		.DMemin_in(RegRdout2_Forward_EX),
		.RegWtaddr_in(RegWtaddr_EX),
		//out
		.ALUResult_out(ALUResult_MEM),
		.DMemin_out(DMemin_MEM),
		.RegWtaddr_out(RegWtaddr_MEM),
		//control sign
		//in
		.DMemRead_in(DMemRead_EX),
		.DMemWrite_in(DMemWrite_EX),
		.DMemtoReg_in(DMemtoReg_EX),
		.RegWrite_in(RegWrite_EX),
		//out
		.DMemRead_out(DMemRead_MEM),
		.DMemWrite_out(DMemWrite_MEM),
		.DMemtoReg_out(DMemtoReg_MEM),
		.RegWrite_out(RegWrite_MEM)
	);
	//=======================MEM=========================	
	assign DMemaddr_MEM = ALUResult_MEM;
	DMem DMem(clk,DMemWrite_MEM,DMemaddr_MEM >> 2,DMemin_MEM,DMemout_MEM);	
	//======================MEMWB========================
	MEMWB MEMWB(
		.clk(~clk),
		.en(1'b1),
		.flush(rst),
		//data
		//in
		.ALUResult_in(ALUResult_MEM),
		.DMemout_in(DMemout_MEM),
		.RegWtaddr_in(RegWtaddr_MEM),
		//out
		.ALUResult_out(ALUResult_WB),
		.DMemout_out(DMemout_WB),
		.RegWtaddr_out(RegWtaddr_WB),
		//control sign
		//in
		.DMemtoReg_in(DMemtoReg_MEM),
		.RegWrite_in(RegWrite_MEM),
		//out
		.DMemtoReg_out(DMemtoReg_WB),
		.RegWrite_out(RegWrite_WB)
	);
	//========================WB=========================

	mux MUXDMemtoReg(DMemtoReg_WB,ALUResult_WB,DMemout_WB,RegWtin_WB);
	
	
	

	
	

	
	
	
endmodule
