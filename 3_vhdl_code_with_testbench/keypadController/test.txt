library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_keypad1 is
end tb_keypad1;

architecture sim of tb_keypad1 is

    -- DUT Ports
    signal clk        : std_logic := '0';
    signal rl         : std_logic_vector(3 downto 0) := "1111";
    signal sl         : std_logic_vector(3 downto 0);
    signal segen_o    : std_logic_vector(6 downto 0);
    signal display_en : std_logic_vector(5 downto 0);

begin
    --------------------------------------------------------------------
    -- Instantiate DUT
    --------------------------------------------------------------------
    UUT : entity work.keypad1
    port map(
        clk        => clk,
        rl         => rl,
        sl         => sl,
        segen_o    => segen_o,
        display_en => display_en
    );

    --------------------------------------------------------------------
    -- Clock generation : 20ns period
    --------------------------------------------------------------------
    clk_process : process
    begin
        clk <= '0';
        wait for 10 ns;
        clk <= '1';
        wait for 10 ns;
    end process;

    --------------------------------------------------------------------
    -- Stimulus
    --------------------------------------------------------------------
    stim_proc : process
    begin
        -- No key pressed
        rl <= "1111";
        wait for 200 ns;

        -------------------------------------------------------------
        -- Key Press Simulation
        -- Each rl pattern represents pressing row of keypad
        -------------------------------------------------------------

        -- Row 0 press
        rl <= "0111";
        wait for 200 ns;

        -- Row 1 press
        rl <= "1011";
        wait for 200 ns;

        -- Row 2 press
        rl <= "1101";
        wait for 200 ns;

        -- Row 3 press
        rl <= "1110";
        wait for 200 ns;

        -- Release everything
        rl <= "1111";
        wait for 200 ns;

        wait;
    end process;

end sim;
