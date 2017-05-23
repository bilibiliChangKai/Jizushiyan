`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:43:10 05/17/2017 
// Design Name: 
// Module Name:    MUX4L_5 
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
module MUX4L_5(
	 input [1:0] control,
    input [4:0] in00,
    input [4:0] in01,
	 input [4:0] in10,
	 input [4:0] in11,
    output [4:0] out
    );
	 
	// 5Ïß4Â·Ñ¡ÔñÆ÷
	assign out = control[0] ? (control[1] ? in11 : in01) : (control[1] ? in10 : in00);

endmodule
