`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:46:03 05/16/2017 
// Design Name: 
// Module Name:    WireToReg 
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
module WireToReg(
	 input CLK,
	 input Enable,
	 input [31:0] in,
	 output reg[31:0] out
    );

	initial
	 begin
		out = 0;
	 end

	always@(posedge CLK)
	 begin
		out = Enable ? in : out;
	 end

endmodule
