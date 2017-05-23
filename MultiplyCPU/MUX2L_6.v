`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:05:01 05/16/2017 
// Design Name: 
// Module Name:    MUX2L_5 
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
module MUX2L_6(
	 input control,
    input [5:0] in0,
    input [5:0] in1,
    output [5:0] out
    );

	// 5Ïß2Â·Ñ¡ÔñÆ÷
	assign out = control ? in1 : in0;

endmodule
