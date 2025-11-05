library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity counter is
    Port (
        clk   : in  STD_LOGIC;
        count : out STD_LOGIC_VECTOR(3 downto 0)
    );
end counter;

architecture Behavioral of counter is

    signal s   : unsigned(3 downto 0)  := (others => '0');
    signal s1  : unsigned(20 downto 0) := (others => '0');
    signal sclk : STD_LOGIC := '0';

begin

    -- Frequency divider
    process(clk)
    begin
        if rising_edge(clk) then
            s1 <= s1 + 1;
        end if;
    end process;

    sclk <= s1(20);

    -- Counter process
    process(sclk)
    begin
        if rising_edge(sclk) then
            s <= s + 1;
        end if;
    end process;

    count <= std_logic_vector(s);

end Behavioral;
