`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:32:10 05/03/2017 
// Design Name: 
// Module Name:    MUX5 
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
module Multiplexer5(
	 input control,
    input [4:0] in1,
    input [4:0] in0,
    output [4:0] out
    );

	// 5线多路选择器
	assign out = control ? in1 : in0;
	
endmodule
