`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:11:08 05/03/2017 
// Design Name: 
// Module Name:    CU 
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
module ControlUnit(
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
    );
	
	// 有限状态机宏定义
	parameter [2:0] 
		IF = 3'b000,
		ID = 3'b001,
		EXELS = 3'b010,
		MEM = 3'b011,
		WBL = 3'b100,
		EXEBR = 3'b101,
		EXEAL = 3'b110,
		WBAL = 3'b111;
	
	// 指令宏定义，由于有些指令为关键字，因此全部首字符大写
	parameter [5:0]
		Add = 6'b000000,
		Addi = 6'b000010, 
		Sub = 6'b000001, 
      Ori = 6'b010010,  
		And = 6'b010001,
		Or = 6'b010000,
      Sll = 6'b011000,  
      Move = 6'b100000,  
      Slt = 6'b100111,  
      Sw = 6'b110000,  
      Lw = 6'b110001,  
      Beq = 6'b110100,  
      J = 6'b111000,  
      Jr = 6'b111001,   
      Jal = 6'b111010,  
      Halt = 6'b111111; 
	
	// 3位D触发器，代表8个状态
	/* 000 -> IF
	 * 001 -> ID
	 * 010 -> EXELS
	 * 011 -> MEM
	 * 100 -> WBL
	 * 101 -> EXEBR
	 * 110 -> EXEAL
	 * 111 -> WBAL
	 */
	reg [2:0] D_Tri;
	
	// 进行各种赋值
	initial 
	 begin
		PCWre = 0;
		ALUSrcB = 0;
		ALUM2Reg = 0;
		RegWre = 0;
		WrRegData = 0;
		// no change
		InsMemRW = 0;
		DataMemRW = 0;
		// no change
		IRWre = 1;
		ExtSel = 0;
		PCSrc = 0;
		RegOut = 0;
		ALUOp = 0;
		D_Tri = 0;
    end

	// D触发器变化，PS：为了避免竞争冒险，所有值变化改为下降沿触发
	// PCWre，RegWre和DataMemRW的变化影响很大，要在这里写
	always@(negedge CLK or posedge reset)
	 begin
		// 重置属性
		if (reset)  
		 begin
			D_Tri = IF;
			PCWre = 0;
			RegWre = 0;
		 end
		else
		 begin
			case (D_Tri)
				// IF -> ID
				IF:
				 begin
					D_Tri <= ID;
					// 禁止写指令，寄存器，和内存
					PCWre = 0;
					RegWre = 0;
					DataMemRW = 0;
				 end
				// ID -> EXE
				ID:
				 begin
					case (op)
						// 如果是beq指令，跳到EXEBR
						Beq:  D_Tri <= EXEBR;
						// 如果是sw，lw指令，跳到EXELS
						Sw, Lw:  D_Tri <= EXELS;
						// 如果是j，jal，jr，halt，跳到IF
						J, Jal, Jr, Halt:
						 begin
						   D_Tri = IF;
							// 如果指令是halt，禁止写指令
							if (op == Halt)  PCWre = 0;  
							else  PCWre = 1;
							// 如果指令是jal，允许写寄存器
							if (op == Jal)  RegWre = 1;
							else  RegWre = 0;
						 end
						// 其他，跳到EXEAL
						default:  D_Tri = EXEAL;
					endcase
				 end
				// EXEAL -> WBAL
				EXEAL:
				 begin
					D_Tri = WBAL;
					// 允许写寄存器
					RegWre = 1; 
				 end 
				// EXELS -> MEM
				EXELS:  
				 begin
					D_Tri = MEM;
					// 如果指令为sw，允许写内存
					if (op == Sw)  DataMemRW = 1;
				 end
				// MEM -> WBL
				MEM:
				 begin
					// 如果指令为sw，MEM -> IF
					if (op == Sw)
					 begin
						D_Tri = IF;
						// 允许写指令
						PCWre = 1;
					 end
					// 如果指令为lw，MEM -> WBL
					else
					 begin
						D_Tri = WBL;
						// 允许写寄存器
						RegWre = 1;
					 end
				 end 
				// 其他 -> IF
				default:
				 begin
					D_Tri = IF;
					// 允许写指令
					PCWre = 1;
					// 禁止写寄存器
					RegWre = 0;
				 end
			endcase
		 end
	 end

	// 一般信号
	always@(op or zero)
    begin  
      case(op) 
			Add:
          begin   //以下都是控制单元产生的控制信号
				ALUSrcB = 0;
				ALUM2Reg = 0;
				WrRegData = 1;
				ExtSel = 00;
				PCSrc = 00;
				RegOut = 10;
				ALUOp = 000;
			 end
			Addi:
          begin   //以下都是控制单元产生的控制信号
				ALUSrcB = 1;
				ALUM2Reg = 0;
				WrRegData = 1;
				ExtSel = 10;
				PCSrc = 00;
				RegOut = 01;
				ALUOp = 000;
			 end
			Sub:
          begin   //以下都是控制单元产生的控制信号
				ALUSrcB = 0;
				ALUM2Reg = 0;
				WrRegData = 1;
				ExtSel = 00;
				PCSrc = 00;
				RegOut = 10;
				ALUOp = 001;
			 end
			Ori:
          begin   //以下都是控制单元产生的控制信号
				ALUSrcB = 1;
				ALUM2Reg = 0;
				WrRegData = 1;
				ExtSel = 01;
				PCSrc = 00;
				RegOut = 01;
				ALUOp = 101;
			 end
			And:
          begin   //以下都是控制单元产生的控制信号
				ALUSrcB = 0;
				ALUM2Reg = 0;
				WrRegData = 1;
				ExtSel = 00;
				PCSrc = 00;
				RegOut = 10;
				ALUOp = 110;
			 end
			Or:
          begin   //以下都是控制单元产生的控制信号
				ALUSrcB = 0;
				ALUM2Reg = 0;
				WrRegData = 1;
				ExtSel = 00;
				PCSrc = 00;
				RegOut = 10;
				ALUOp = 101;
			 end
			Sll:
          begin   //以下都是控制单元产生的控制信号
				ALUSrcB = 1;
				ALUM2Reg = 0;
				WrRegData = 1;
				ExtSel = 00;
				PCSrc = 00;
				RegOut = 10;
				ALUOp = 100;
			 end
			Move:
          begin   //以下都是控制单元产生的控制信号
				ALUSrcB = 0;
				ALUM2Reg = 0;
				WrRegData = 1;
				ExtSel = 00;
				PCSrc = 00;
				RegOut = 10;
				ALUOp = 000;
			 end
			Slt:
          begin   //以下都是控制单元产生的控制信号
				ALUSrcB = 0;
				ALUM2Reg = 0;
				WrRegData = 1;
				ExtSel = 00;
				PCSrc = 00;
				RegOut = 10;
				ALUOp = 010;
			 end
			Sw:
          begin   //以下都是控制单元产生的控制信号
				ALUSrcB = 1;
				ALUM2Reg = 0;
				RegWre = 0;
				WrRegData = 1;
				ExtSel = 10;
				PCSrc = 00;
				RegOut = 00;
				ALUOp = 000;
			 end
			Lw:
          begin   //以下都是控制单元产生的控制信号
				ALUSrcB = 1;
				ALUM2Reg = 1;
				WrRegData = 1;
				ExtSel = 10;
				PCSrc = 00;
				RegOut = 01;
				ALUOp = 000;
			 end
			Beq:
          begin   //以下都是控制单元产生的控制信号
				if (zero)  PCSrc = 01;
				else  PCSrc = 00;
				ALUSrcB = 0;
				ALUM2Reg = 0;
				RegWre = 0;
				WrRegData = 1;
				 
				ExtSel = 10;
				RegOut = 00;
				ALUOp = 001;
			 end
			J:
          begin   //以下都是控制单元产生的控制信号
				ALUSrcB = 0;
				ALUM2Reg = 0;
				RegWre = 0;
				WrRegData = 1;
				ExtSel = 00;
				PCSrc = 11;
				RegOut = 00;
				ALUOp = 000;
			 end
			Jr:
          begin   //以下都是控制单元产生的控制信号
				ALUSrcB = 0;
				ALUM2Reg = 0;
				RegWre = 0;
				WrRegData = 1;
				ExtSel = 00;
				PCSrc = 10;
				RegOut = 00;
				ALUOp = 000;
			 end
			Jal:
          begin   //以下都是控制单元产生的控制信号
				ALUSrcB = 0;
				ALUM2Reg = 0;
				WrRegData = 0;
				ExtSel = 00;
				PCSrc = 11;
				RegOut = 00;
				ALUOp = 000;
			 end
			Halt:
			 begin   //以下都是控制单元产生的控制信号
				PCWre = 0;
				ALUSrcB = 0;
				ALUM2Reg = 0;
				RegWre = 0;
				WrRegData = 1;
				ExtSel = 00;
				PCSrc = 00;
				RegOut = 00;
				ALUOp = 000;
			 end
		endcase
	 end

endmodule
