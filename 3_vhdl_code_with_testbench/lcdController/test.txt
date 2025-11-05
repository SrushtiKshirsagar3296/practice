library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_LCD_CONTROLLER is
end tb_LCD_CONTROLLER;

architecture sim of tb_LCD_CONTROLLER is

    -- DUT signals
    signal clk   : std_logic := '0';
    signal d_out : std_logic_vector(7 downto 0);
    signal rs, rw, en : std_logic;

begin

    -- Instantiate DUT
    uut: entity work.LCD_CONTROLLER
        port map(
            clk   => clk,
            d_out => d_out,
            rs    => rs,
            rw    => rw,
            en    => en
        );

    -- Clock process (50 MHz ? 20 ns period)
    clk_process : process
    begin
        clk <= '0';
        wait for 10 ns;
        clk <= '1';
        wait for 10 ns;
    end process;

    -- Simulation duration
    stim_proc : process
    begin
        -- Run long enough to cover all states
        wait for 20 ms;    -- LCD clock is divided; slow transition
        wait;
    end process;

end sim;
