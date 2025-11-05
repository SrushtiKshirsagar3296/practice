--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:24:53 10/19/2025
-- Design Name:   
-- Module Name:   D:/VLSI Practical/alu_4bit/test.vhd
-- Project Name:  alu_4bit
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: alu_4bit
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT alu_4bit
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         opcode : IN  std_logic_vector(2 downto 0);
         y : OUT  std_logic_vector(4 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(3 downto 0) := (others => '0');
   signal opcode : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal y : std_logic_vector(4 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: alu_4bit PORT MAP (
          a => a,
          b => b,
          opcode => opcode,
          y => y
        );

   -- Clock process definitions
   
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      a<="0101";
		b<="1001";
		opcode<="000";
		wait for 100 ns;
		a<="0110";
		b<="0101";
		opcode<="001";
		wait for 100 ns;
		a<="0101";
		b<="0111";
		opcode<="010";
		wait for 100 ns;
		a<="1001";
		b<="0001";
		opcode<="100";
		wait for 100 ns;

      -- insert stimulus here 

      wait;
   end process;

END;
