`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:10:27 05/03/2017 
// Design Name: 
// Module Name:    IM 
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
module InstructionMemory(
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
    );
	 
	reg[7:0] mem[0:63];  // 新建一个32位的数组用于储存指令
	
	initial 
	 begin
		// 初始化
		op <= 0;
		rs <= 0;
		rt <= 0;
		rd <= 0;
		immediate <= 0;
		address <= 0;
		$readmemb("test/test.txt", mem);  //读取测试文档中的指令
	 end

	// 从地址取值，然后输出
	always@(posedge CLK or posedge IRWre)
	 begin
		if (IRWre == 1)
		 begin
			op = mem[IAddr][7:2];
			rs[4:3] = mem[IAddr][1:0];
			rs[2:0] = mem[IAddr + 1][7:5];
			rt = mem[IAddr + 1][4:0];
			rd = mem[IAddr + 2][7:3];
			immediate[15:8] = mem[IAddr + 2];
			immediate[7:0] = mem[IAddr + 3];
			
			// 地址赋值
			address[25:21] = rs;
			address[20:16] = rt;
			address[15:0] = immediate;
		 end
	 end

endmodule
