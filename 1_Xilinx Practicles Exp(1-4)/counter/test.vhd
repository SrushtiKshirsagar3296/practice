library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_counter is
end tb_counter;

architecture behavior of tb_counter is

    signal clk   : std_logic := '0';
    signal count : std_logic_vector(3 downto 0);

    -- Instantiate DUT
    component counter
        Port (
            clk   : in  STD_LOGIC;
            count : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

begin

    DUT: counter
        port map (
            clk   => clk,
            count => count
        );

    -- Clock generation (10 ns period ? 100 MHz)
    clk_process : process
    begin
        clk <= '0';
        wait for 5 ns;
        clk <= '1';
        wait for 5 ns;
    end process;

end behavior;
