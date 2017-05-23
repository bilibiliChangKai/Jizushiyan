`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:57:53 05/02/2017 
// Design Name: 
// Module Name:    MainSource 
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
module MainSource(
    input [7:0] x_in,
    input flag,
    output [7:0] y_out
    );

    assign y_out = flag ? x_in : 8'b00000000;

endmodule
