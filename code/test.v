`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:45:44 04/25/2018
// Design Name:   top
// Module Name:   C:/Users/Adminstrator/Desktop/single cycle cpu/cpu/test.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg rst;
wire tALUSrcASel_ID;
wire tALUSrcASel_EX;
wire [1:0] tALUSrcBSel_ID;
wire [1:0] tALUSrcBSel_EX;
wire [31:0] tALUSrcA_EX;
wire [31:0] tALUSrcB_EX;
wire [4:0] tALUControl_ID;
wire [4:0] tALUControl_EX;
wire [31:0] tALUResult_EX;
wire [31:0] tALUResult_MEM;
wire [31:0] tALUResult_WB;
wire [1:0] tRsCMPZero;
wire [1:0] tRsCMPRt;
wire [31:0] tIMMSignExtended_ID;
wire [31:0] tIMMSignExtended_EX;
wire [31:0] tIMMZeroExtended_ID;
wire [31:0] tIMMZeroExtended_EX;
wire [31:0] tShamtZeroExtended_ID;
wire [31:0] tShamtZeroExtended_EX;
wire [1:0] tRegRdout1Sel_Forward_EX;
wire [1:0] tRegRdout2Sel_Forward_EX;
wire [31:0] tRegRdout1_Forward_EX;
wire [31:0] tRegRdout2_Forward_EX;
wire [4:0] tRegRdaddr1_ID;
wire [31:0] tRegRdout1_ID;
wire [31:0] tRegRdout1_EX;
wire [4:0] tRegRdaddr2_ID;
wire [31:0] tRegRdout2_ID;
wire [31:0] tRegRdout2_EX;
wire [4:0] tRegWtaddr_ID;
wire [4:0] tRegWtaddr_EX;
wire [4:0] tRegWtaddr_MEM;
wire [4:0] tRegWtaddr_WB;
wire [31:0] tRegWtin_WB;
wire tRegWrite_ID;
wire tRegWrite_EX;
wire tRegWrite_MEM;
wire tRegWrite_WB;
wire tRegDst_ID;
//wire [31:0] tIMemaddr_src;
wire [31:0] tIMemaddr;
wire [31:0] tIMemout;
wire [31:0] tDMemaddr_MEM;
wire [31:0] tDMemin_MEM;
wire tDMemRead_MEM;
wire [31:0] tDMemout_MEM;
wire [31:0] tDMemout_WB;
wire tDMemWrite_MEM;
wire tDMemtoReg_EX;
wire tDMemtoReg_MEM;
wire tDMemtoReg_WB;
wire [31:0] tPC;
wire [31:0] tPCPlus_IF;
wire [31:0] tPCPlus_ID;
wire [31:0] tPCPlus_EX;
wire [31:0] tEPC;
wire [31:0] tnextPC;
wire tPCEn;
wire [1:0] tPCSrc_ID;
wire tIF_ID_En;
wire tIF_ID_Flush;
wire tID_EX_Flush;
wire [31:0] tPCJump_ID;
wire [31:0] tPCJR_ID;
wire [31:0] tPCBranch_ID;
wire [31:0] tInstr;
wire [5:0] tFunct;
wire [4:0] tShamt;
wire [15:0] tIMM16;
wire [4:0] tRd;
wire [4:0] tRt;
wire [4:0] tRs;
wire [5:0] tOp;
wire [4:0] tRt_EX;
wire [4:0] tRs_EX;
wire [25:0] tJumpIMM;	
wire [31:0] tIMMSignExtendedShiftLeft2;
	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst(rst),
.tALUSrcASel_ID(tALUSrcASel_ID),
.tALUSrcASel_EX(tALUSrcASel_EX),
.tALUSrcBSel_ID(tALUSrcBSel_ID),
.tALUSrcBSel_EX(tALUSrcBSel_EX),
.tALUSrcA_EX(tALUSrcA_EX),
.tALUSrcB_EX(tALUSrcB_EX),
.tALUControl_ID(tALUControl_ID),
.tALUControl_EX(tALUControl_EX),
.tALUResult_EX(tALUResult_EX),
.tALUResult_MEM(tALUResult_MEM),
.tALUResult_WB(tALUResult_WB),
.tRsCMPZero(tRsCMPZero),
.tRsCMPRt(tRsCMPRt),
.tIMMSignExtended_ID(tIMMSignExtended_ID),
.tIMMSignExtended_EX(tIMMSignExtended_EX),
.tIMMZeroExtended_ID(tIMMZeroExtended_ID),
.tIMMZeroExtended_EX(tIMMZeroExtended_EX),
.tShamtZeroExtended_ID(tShamtZeroExtended_ID),
.tShamtZeroExtended_EX(tShamtZeroExtended_EX),
.tRegRdout1Sel_Forward_EX(tRegRdout1Sel_Forward_EX),
.tRegRdout2Sel_Forward_EX(tRegRdout2Sel_Forward_EX),
.tRegRdout1_Forward_EX(tRegRdout1_Forward_EX),
.tRegRdout2_Forward_EX(tRegRdout2_Forward_EX),
.tRegRdaddr1_ID(tRegRdaddr1_ID),
.tRegRdout1_ID(tRegRdout1_ID),
.tRegRdout1_EX(tRegRdout1_EX),
.tRegRdaddr2_ID(tRegRdaddr2_ID),
.tRegRdout2_ID(tRegRdout2_ID),
.tRegRdout2_EX(tRegRdout2_EX),
.tRegWtaddr_ID(tRegWtaddr_ID),
.tRegWtaddr_EX(tRegWtaddr_EX),
.tRegWtaddr_MEM(tRegWtaddr_MEM),
.tRegWtaddr_WB(tRegWtaddr_WB),
.tRegWtin_WB(tRegWtin_WB),
.tRegWrite_ID(tRegWrite_ID),
.tRegWrite_EX(tRegWrite_EX),
.tRegWrite_MEM(tRegWrite_MEM),
.tRegWrite_WB(tRegWrite_WB),
.tRegDst_ID(tRegDst_ID),
//.tIMemaddr_src(tIMemaddr_src),
.tIMemaddr(tIMemaddr),
.tIMemout(tIMemout),
.tDMemaddr_MEM(tDMemaddr_MEM),
.tDMemin_MEM(tDMemin_MEM),
.tDMemRead_MEM(tDMemRead_MEM),
.tDMemout_MEM(tDMemout_MEM),
.tDMemout_WB(tDMemout_WB),
.tDMemWrite_MEM(tDMemWrite_MEM),
.tDMemtoReg_EX(tDMemtoReg_EX),
.tDMemtoReg_MEM(tDMemtoReg_MEM),
.tDMemtoReg_WB(tDMemtoReg_WB),
.tPC(tPC),
.tPCPlus_IF(tPCPlus_IF),
.tPCPlus_ID(tPCPlus_ID),
.tPCPlus_EX(tPCPlus_EX),
.tEPC(tEPC),
.tnextPC(tnextPC),
.tPCEn(tPCEn),
.tPCSrc_ID(tPCSrc_ID),
.tIF_ID_En(tIF_ID_En),
.tIF_ID_Flush(tIF_ID_Flush),
.tID_EX_Flush(tID_EX_Flush),
.tPCJump_ID(tPCJump_ID),
.tPCJR_ID(tPCJR_ID),
.tPCBranch_ID(tPCBranch_ID),
.tInstr(tInstr),
.tFunct(tFunct),
.tShamt(tShamt),
.tIMM16(tIMM16),
.tRd(tRd),
.tRt(tRt),
.tRs(tRs),
.tOp(tOp),
.tRt_EX(tRt_EX),
.tRs_EX(tRs_EX),
.tJumpIMM(tJumpIMM),
.tIMMSignExtendedShiftLeft2(tIMMSignExtendedShiftLeft2)
	);
	
	//always #10 clk=~clk;
	initial begin
		// Initialize Inputs
		clk = 1;
		
		//
		rst = 0;
		#100;
		
		//
		rst = 1;
		
		
		// Wait 100 ns for global reset to finish
		#100;
		clk=~clk;
		#10;
		clk=~clk;
      rst = 0;
		
		forever begin
			#10;
			clk=~clk;
			
		end
		
		
		// Add stimulus here
 
	end
      
endmodule

