`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:16:33 05/16/2017 
// Design Name: 
// Module Name:    MUX2L_32 
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
module MUX2L_32(
	 input control,
    input [31:0] in0,
    input [31:0] in1,
    output [31:0] out
    );

	// 32Ïß2Â·Ñ¡ÔñÆ÷
	assign out = control ? in1 : in0;

endmodule
