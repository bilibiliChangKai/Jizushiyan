`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:56:37 05/24/2017 
// Design Name: 
// Module Name:    Test 
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
module Test(
    input CLK,
	 input value,
	 output value1,
	 output value2,
	 output value3,
	 output value4,
	 output value5
    );

	WireToReg r1(CLK, 1, value, value1);
	WireToReg r2(CLK, 1, value1, value2);
	WireToReg r3(CLK, 1, value2, value3);
	WireToReg r4(CLK, 1, value3, value4);
	WireToReg r5(CLK, 1, value4, value5);


endmodule
