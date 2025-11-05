library IEEE;
use IEEE.STd_LOGIC_1164.ALL;

entity tb_uni_shift1 is
end tb_uni_shift1;

architecture test of tb_uni_shift1 is

    signal clk   : std_logic := '0';
    signal reset : std_logic := '0';
    signal si    : std_logic := '0';
    signal load  : std_logic := '0';
    signal pi    : std_logic_vector(3 downto 0) := "0000";
    signal mode  : std_logic_vector(1 downto 0) := "00";
    signal po    : std_logic_vector(3 downto 0);
    signal so    : std_logic;

begin
    --------------------------------------------------------------------
    -- Instantiate DUT
    --------------------------------------------------------------------
    DUT : entity work.uni_shift1
    port map(
        clk   => clk,
        reset => reset,
        si    => si,
        load  => load,
        pi    => pi,
        mode  => mode,
        po    => po,
        so    => so
    );

    --------------------------------------------------------------------
    -- Clock Generator : 20 ns period
    --------------------------------------------------------------------
    clk_process : process
    begin
        clk <= '1';
        wait for 50 ns;
        clk <= '0';
        wait for 50 ns;
    end process;

    --------------------------------------------------------------------
    -- Stimulus
    --------------------------------------------------------------------
    stim_proc : process
    begin

        -- Reset
        reset <= '1';
        wait for 100 ns;
        reset <= '0';
        wait for 100 ns;


        ----------------------------------------------------------------
        -- MODE 00 ? SISO
        ----------------------------------------------------------------
        mode <= "00";
        si <= '0'; wait for 100 ns;
		  si <= '1'; wait for 100 ns;
        si <= '0'; wait for 100 ns;
        si <= '1'; wait for 100 ns;


        ----------------------------------------------------------------
        -- MODE 01 ? SIPO
        ----------------------------------------------------------------
        mode <= "01";
		  si <= '1'; wait for 100 ns;
        si <= '0'; wait for 100 ns;
		  si <= '1'; wait for 100 ns;
        si <= '0'; wait for 100 ns;
		 


        ----------------------------------------------------------------
        -- MODE 10 ? PIPO
        ----------------------------------------------------------------
        mode <= "10";
        pi <= "1010";
        load <= '1'; wait for 200 ns;
        load <= '0'; wait for 400 ns;


        ----------------------------------------------------------------
        -- MODE 11 ? PISO
        ----------------------------------------------------------------
        mode <= "11";
        pi <= "1101";
        load <= '1'; wait for 200 ns;    -- load
        load <= '0'; wait for 1000 ns;   -- shift serial out


        wait;
    end process;

end test;