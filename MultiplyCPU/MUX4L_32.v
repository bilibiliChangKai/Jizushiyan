`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:16:310 05/16/2017 
// Design Name: 
// Module Name:    MUX4L_32 
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
module MUX4L_32(
	 input [1:0]control,
    input [31:0] in00,
    input [31:0] in01,
	 input [31:0] in10,
	 input [31:0] in11,
    output [31:0] out
    );

	// 32Ïß4Â·Ñ¡ÔñÆ÷
	assign out = control[0] ? (control[1] ? in11 : in01) : (control[1] ? in10 : in00);

endmodule
