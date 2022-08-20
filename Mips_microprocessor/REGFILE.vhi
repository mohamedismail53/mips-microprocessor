
-- VHDL Instantiation Created from source file REGFILE.vhd -- 13:03:12 02/27/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT REGFILE
	PORT(
		regselect1 : IN std_logic_vector(4 downto 0);
		regselect2 : IN std_logic_vector(4 downto 0);
		input : IN std_logic_vector(31 downto 0);
		WE : IN std_logic;
		regselectw : IN std_logic_vector(4 downto 0);
		reset : IN std_logic;
		clk : IN std_logic;          
		out1 : OUT std_logic_vector(31 downto 0);
		out2 : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_REGFILE: REGFILE PORT MAP(
		out1 => ,
		out2 => ,
		regselect1 => ,
		regselect2 => ,
		input => ,
		WE => ,
		regselectw => ,
		reset => ,
		clk => 
	);


