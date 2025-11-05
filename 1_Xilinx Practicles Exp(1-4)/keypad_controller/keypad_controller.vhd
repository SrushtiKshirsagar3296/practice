library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity keypad1 is
    port(
        clk       : in  std_logic;
        rl        : in  std_logic_vector(3 downto 0);
        sl        : out std_logic_vector(3 downto 0);
        segen_o   : out std_logic_vector(6 downto 0);
        display_en: out std_logic_vector(5 downto 0)
    );
end keypad1;

architecture Behavioral of keypad1 is

    signal sl_s  : std_logic_vector(3 downto 0) := "1110";
    signal segen : std_logic_vector(6 downto 0) := "1111111";

begin

    -- SHIFT PROCESS
    process(clk)
    begin
        if rising_edge(clk) then
            sl_s(3) <= sl_s(2);
            sl_s(2) <= sl_s(1);
            sl_s(1) <= sl_s(0);
            sl_s(0) <= sl_s(3);
        end if;
    end process;

    -- KEYPAD PROCESS
    process(clk, rl, sl_s)
    begin
        if rising_edge(clk) then
            case rl is
                when "0111" =>
                    if    sl_s = "0111" then segen <= "0000001";
                    elsif sl_s = "1011" then segen <= "1001111";
                    elsif sl_s = "1101" then segen <= "0010010";
                    elsif sl_s = "1110" then segen <= "0000110";
                    end if;

                when "1011" =>
                    if    sl_s = "0111" then segen <= "1001100";
                    elsif sl_s = "1011" then segen <= "0100100";
                    elsif sl_s = "1101" then segen <= "0100000";
                    elsif sl_s = "1110" then segen <= "0001111";
                    end if;

                when "1101" =>
                    if    sl_s = "0111" then segen <= "0000000";
                    elsif sl_s = "1011" then segen <= "0001100";
                    elsif sl_s = "1101" then segen <= "0001000";
                    elsif sl_s = "1110" then segen <= "1100000";
                    end if;

         

                when others =>
                    segen <= segen;
            end case;
        end if;
    end process;

    sl        <= sl_s;
    display_en<= "111101";
    segen_o   <= segen;

end Behavioral;
