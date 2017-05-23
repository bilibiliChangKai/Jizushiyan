`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:09:42 05/16/2017 
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
module MUX4L_6(
	 input [1:0] control,
    input [5:0] in00,
    input [5:0] in01,
	 input [5:0] in10,
	 input [5:0] in11,
    output [5:0] out
    );
	 
	// 5Ïß4Â·Ñ¡ÔñÆ÷
	/*always@(*)
	begin
	if (control == 2'b00)  out = in00;
	else if (control == 2'b01)  out = in01;
	else if (control == 2'b10)  out = in10;
	else  out = in11;
	end*/
	assign out = control[0] ? (control[1] ? in11 : in01) : (control[1] ? in10 : in00);

endmodule
