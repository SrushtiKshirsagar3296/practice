library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity uni_shift1 is
    port(
        reset : in STD_LOGIC;
        si    : in STD_LOGIC;
        clk   : in STD_LOGIC;
        load  : in STD_LOGIC;
        pi    : in STD_LOGIC_VECTOR (3 downto 0);
        po    : out STD_LOGIC_VECTOR (3 downto 0);
        mode  : in STD_LOGIC_VECTOR (1 downto 0);
        so    : out STD_LOGIC
    );
end uni_shift1;

architecture Behavioral of uni_shift1 is
    signal temp : STD_LOGIC_VECTOR (3 downto 0) := "0000";
begin

    process(clk, reset)
    begin
        if reset = '1' then
            temp <= (others => '0');
            so   <= '0';

        elsif rising_edge(clk) then
            case mode is

                -- SISO
                when "00" =>
                    so   <= temp(3);
                    temp <= temp(2 downto 0) & si;

                -- SIPO
                when "01" =>
                    temp <= temp(2 downto 0) & si;

                -- PIPO
                when "10" =>
                    if load = '1' then
                        temp <= pi;
                    end if;

                -- PISO
                when "11" =>
                    if load = '1' then
                        temp <= pi;
                    else
                        so   <= temp(3);
                        temp <= temp(2 downto 0) & '0';
                    end if;

                when others =>
                    null;

            end case;
        end if;
    end process;

    po <= temp;

end Behavioral;