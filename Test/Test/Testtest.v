`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:04:55 05/24/2017
// Design Name:   Test
// Module Name:   D:/Test/Test/Testtest.v
// Project Name:  Test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Testtest;

	// Inputs
	reg CLK;
	reg value;

	// Instantiate the Unit Under Test (UUT)
	Test uut (
		.CLK(CLK), 
		.value(value),
		.value1(value1),
		.value2(value2),
		.value3(value3),
		.value4(value4),
		.value5(value5)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		value = 0;

		// Wait 100 ns for global reset to finish
		#100;
        value = 1;  // 将初始值变成1
		// Add stimulus here

		// 时钟周期变化
		forever #10
		 begin
			CLK = !CLK;
		 end

	end
      
endmodule

