library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity LCD_CONTROLLER is
	port(clk:in std_logic;
	d_out:out std_logic_vector(7 downto 0);
	rs,rw,en:out std_logic);
end LCD_CONTROLLER;

architecture Behavioral of LCD_CONTROLLER is
	type state is (s0,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15);
	signal pr_state, ns_state:state;
	signal clk_lcd: std_logic_vector(15 downto 0):=(others=>'0');
begin
	process(clk)
	begin
		if rising_edge(clk) then
			clk_lcd<=clk_lcd+1;
      end if;
	end process;


	process(clk_lcd(15), pr_state, ns_state)
	begin 
		if rising_edge(clk_lcd(15)) then
			pr_state<=ns_state;
		end if;
	end process;

	process(clk_lcd(15), pr_state, ns_state)
	begin
		if rising_edge(clk_lcd(15)) then
			case pr_state is 
				when s0=> d_out<=x"38"; rs<='0';rw<='0';en<='1';ns_state<=s1;
				when s1=> d_out<=x"38"; rs<='0';rw<='0';en<='0';ns_state<=s2;
				when s2=> d_out<=x"0C"; rs<='0';rw<='0';en<='1';ns_state<=s3;
				when s3=> d_out<=x"0C"; rs<='0';rw<='0';en<='0';ns_state<=s4;
				when s4=> d_out<=x"06"; rs<='0';rw<='0';en<='1';ns_state<=s5;
				when s5=> d_out<=x"06"; rs<='0';rw<='0';en<='0';ns_state<=s6;
				when s6=> d_out<=x"01"; rs<='0';rw<='0';en<='1';ns_state<=s7;
				when s7=> d_out<=x"01"; rs<='0';rw<='0';en<='0';ns_state<=s8;
				when s8=> d_out<=x"53"; rs<='1';rw<='0';en<='1';ns_state<=s9;
				when s9=> d_out<=x"53"; rs<='1';rw<='0';en<='0';ns_state<=s10;
				when s10=> d_out<=x"49"; rs<='1';rw<='0';en<='1';ns_state<=s11;
				when s11=> d_out<=x"49"; rs<='1';rw<='0';en<='0';ns_state<=s12;
				when s12=> d_out<=x"54"; rs<='1';rw<='0';en<='1';ns_state<=s13;
				when s13=> d_out<=x"54"; rs<='1';rw<='0';en<='0';ns_state<=s14;
				when s14=> d_out<=x"53"; rs<='1';rw<='0';en<='1';ns_state<=s15;
				when s15=> d_out<=x"53"; rs<='1';rw<='0';en<='0';ns_state<=s15;
			end case;
		end if;
	end process;
end behavioral;