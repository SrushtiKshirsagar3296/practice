----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:21:08 10/19/2025 
-- Design Name: 
-- Module Name:    alu_4bit - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity alu_4bit is
    Port ( a,b : in  STD_LOGIC_VECTOR (3 downto 0);
           opcode : in  STD_LOGIC_VECTOR (2 downto 0);
           y : out  STD_LOGIC_VECTOR (4 downto 0));
end alu_4bit;

architecture Behavioral of alu_4bit is	
	SIGNAL as,bs,ys : STD_LOGIC_VECTOR(4 downto 0);
Begin
as<='0'&a;
bs<='0'&b;
process(as,bs,opcode,ys)
begin
	case opcode is 
		when  "000"=> ys<=as+bs; y(4)<=ys(4);
		when  "001"=> ys<=as+bs; y(4)<=ys(4);	
		when  "010"=> ys<=as and bs; 
		when  "011"=> ys<=as nand bs; 
		when  "100"=> ys<=as xor bs; 
		when  "101"=> ys<=as xnor bs; 
		when  "110"=> ys<=as or bs; 
		when  others=>ys<= '0' & as (3 downto 0);
 end case;
end process;
y(3 downto 0)<=ys(3 downto 0);
end behavioral;


