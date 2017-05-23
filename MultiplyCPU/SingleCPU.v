`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:43:17 05/02/2017 
// Design Name: 
// Module Name:    SingleCPU 
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
module SingleCPU(
    input CLK,
    input Reset,
    output [5:0] op,
	 output [4:0] rs,
	 output [4:0] rt,
	 output [4:0] rd,
	 output [15:0] immediate,
    output [31:0] ReadData1,
    output [31:0] ReadData2,
	 output [31:0] WriteData,
	 output [31:0] DataOut,
    output [31:0] currentAddress,
    output [31:0] result,
	 output PCWre
    );

	// 各种临时变量
   wire [31:0] B, newAddress;
   wire [31:0] currentAddress_4, extendImmediate, currentAddress_immediate, outAddress, ALUM2DR;	  
   wire [4:0] WriteReg;  
	wire [25:0] address;
	
   wire zero, ALUSrcB, ALUM2Reg, RegWre, WrRegData, InsMemRW, DataMemRW, IRWre;
	wire [1:0] ExtSel, PCSrc, RegOut;
	wire [2:0] ALUOp;
	
	// 寄存器输出值
	wire [31:0] RegReadData1, RegReadData2, RegResult, RegDataOut;
	
	/*module ControlUnit(
	 input CLK,              // 时钟
	 input reset,            // 重置信号
    input [5:0] op,         // op操作符
    input zero,             // ALU的zero输出
	 
	 // 一堆控制信号
    output reg PCWre,           // (PC)PC是否更改，如果为0，PC不更改，
										  // 另外，除D_Tri == 000状态之外，其余状态也不能改变PC的值。
    output reg ALUSrcB,         // 多路选择器
    output reg ALUM2Reg,        // 多路选择器
    output reg RegWre,          // (RF)写使能信号，为1时，在时钟上升沿写入
	 output reg WrRegData,       // 2路选择器，判断数据写入是否为PC指令，如果为1，则不是，jar用到
    output reg InsMemRW,        // (IM)读写控制信号，1为写，0位读，固定为0
    output reg DataMemRW,       // (DM)数据存储器读写控制信号，为1写，为0读
	 output reg IRWre,           // 寄存器写使能，暂时没什么用，固定为1
    output reg[1:0] ExtSel,     // (EXT)控制补位，如果为1，进行符号扩展，如果为0，全补0
	 output reg[1:0] PCSrc,      // 4路选择器，选择PC指令来源
    output reg[1:0] RegOut,     // 4路选择器，判断写寄存器地址的来源
    output reg[2:0] ALUOp       // (ALU)ALU操作控制 
    );*/
	ControlUnit cu(CLK, Reset, op, zero, PCWre, ALUSrcB, ALUM2Reg,
		RegWre, WrRegData, InsMemRW, DataMemRW, IRWre, ExtSel, PCSrc, RegOut, ALUOp);
	
	/*module PC(
    input CLK,                         // 时钟
    input Reset,                       // 重置信号
    input PCWre,                       // PC是否更改，如果为0，PC不更改
    input [31:0] newAddress,           // 新指令
    output reg[31:0] currentAddress    // 当前指令
    );*/
	PC pc(CLK, Reset, PCWre, newAddress, currentAddress);
	
	/*module InstructionMemory(
	 input InsMemRW,            // 读写控制信号，1为写，0位读
    input [31:0] IAddr,        // 指令地址输入入口
	 //input IDataIn,           // 没用到 
	 
	 input CLK,                  // 时钟信号
	 input IRWre,                // 输出寄存器写使能
	 
    output reg[5:0] op,
    output reg[4:0] rs,
    output reg[4:0] rt,
    output reg[4:0] rd,
    output reg[15:0] immediate, // 指令代码分时段输出
	 output reg[25:0] address
    );*/
	InstructionMemory im(InsMemRW, currentAddress, CLK, IRWre, op, rs, rt, rd, immediate, address);
	
	/*module RegisterFile(
	 input CLK,                       // 时钟
	 input RegWre,                    // 写使能信号，为1时，在时钟上升沿写入
    input [4:0] rs,                  // rs寄存器地址输入端口
    input [4:0] rt,                  // rt寄存器地址输入端口
    input [4:0] WriteReg,            // 将数据写入的寄存器端口，其地址来源rt或rd字段
    input [31:0] WriteData,          // 写入寄存器的数据输入端口
	 output [31:0] ReadData1,         // rs数据输出端口
    output [31:0] ReadData2          // rt数据输出端口
    );*/
	RegisterFile rf(CLK, RegWre, rs, rt, WriteReg, WriteData, ReadData1, ReadData2);
	
	/*module ALU(
	 input [2:0] ALUOp,           // ALU操作控制
    input [31:0] A,              // 输入1
    input [31:0] B,              // 输入2
    output reg zero,             // 运算结果result的标志，result为0输出1，否则输出0
	 output reg[31:0] result      // ALU运算结果
    );*/
	ALU alu(ALUOp, ReadData1, B, zero, result);
	
	/*module SignZeroExtend(
    input [1:0]ExtSel,              // 控制补位，如果为1X，进行符号扩展
	                                 // 如果为01，immediate全补0
	                                 // 如果为00，sa全补0
    input [15:0] immediate,         // 16位立即数
    output [31:0] extendImmediate   // 输出的32位立即数
    );*/
	SignZeroExtend sze(ExtSel, immediate, extendImmediate);
	
	/*module DataMemory(
	 input DataMemRW,            // 数据存储器读写控制信号，为1写，为0读
    input [31:0] DAddr,         // 数据存储器地址输入端口
    input [31:0] DataIn,        // 数据存储器数据输入端口
    output reg [31:0] DataOut   // 数据存储器数据输出端口
    );*/
	DataMemory dm(DataMemRW, RegResult, RegReadData2, DataOut);
	
	/*module PCJUMP(
    input [31:0] PC0,          // 指令
    input [25:0] inAddress,    // 输入地址
    output [31:0] outAddress   // 输出地址(指令)
    );*/
	PCJUMP pcj(currentAddress, address, outAddress);
	
	assign currentAddress_4 = currentAddress + 4;
	assign currentAddress_immediate = currentAddress_4 + (extendImmediate << 2);
	
	// 线转寄存器
	WireToReg wtrA(CLK, 1, ReadData1, RegReadData1);
	WireToReg wtrB(CLK, 1, ReadData2, RegReadData2);
	WireToReg wtrALU(CLK, 1, result, RegResult);
	WireToReg wtrMEM(CLK, 1, DataOut, RegDataOut);

	// 2路选择器
	MUX2L_32 mux2_1(WrRegData, currentAddress_4, ALUM2DR, WriteData);
	MUX2L_32 mux2_2(ALUSrcB, RegReadData2, extendImmediate, B);
	MUX2L_32 mux2_3(ALUM2Reg, result, RegDataOut, ALUM2DR);
	
	// 4路选择器
	MUX4L_5 mux4_1(RegOut, 5'b11111, rt, rd, 5'b00000, WriteReg);
	MUX4L_32 mux4_2(PCSrc, currentAddress_4, currentAddress_immediate,
		ReadData1, outAddress, newAddress);
	
endmodule
