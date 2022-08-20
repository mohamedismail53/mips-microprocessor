
-- VHDL Instantiation Created from source file OUTPUT.vhd -- 13:18:58 02/27/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT OUTPUT
	PORT(
		RS : IN std_logic_vector(31 downto 0);
		clk : IN std_logic;
		reset : IN std_logic;
		OE : IN std_logic;          
		M_OUT_signal : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_OUTPUT: OUTPUT PORT MAP(
		RS => ,
		clk => ,
		reset => ,
		M_OUT_signal => ,
		OE => 
	);


