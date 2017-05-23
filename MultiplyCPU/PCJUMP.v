`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:43:29 05/16/2017 
// Design Name: 
// Module Name:    PCJUMP 
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
module PCJUMP(
    input [31:0] PC0,          // 指令
    input [25:0] inAddress,    // 输入地址
    output [31:0] outAddress   // 输出地址(指令)
    );

	// outAddress = PC + inAddress + 00
	assign outAddress[31:28] = PC0[31:28];
	assign outAddress[27:2] = inAddress;
	assign outAddress[1:0] = 2'b00;

endmodule
