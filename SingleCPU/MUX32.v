`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:52:07 05/03/2017 
// Design Name: 
// Module Name:    MUX32 
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
module Multiplexer32(
	 input control,
    input [31:0] in1,
    input [31:0] in0,
    output [31:0] out
    );

	// 32线多路选择器
	assign out = control ? in1 : in0;

endmodule
