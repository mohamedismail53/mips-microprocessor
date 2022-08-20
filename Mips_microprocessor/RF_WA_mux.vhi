
-- VHDL Instantiation Created from source file RF_WA_mux.vhd -- 01:00:57 02/28/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT RF_WA_mux
	PORT(
		IR_15_11 : IN std_logic_vector(4 downto 0);
		IR_20_16 : IN std_logic_vector(4 downto 0);
		RF_WA_MUX : IN std_logic_vector(1 downto 0);          
		WA : OUT std_logic_vector(4 downto 0)
		);
	END COMPONENT;

	Inst_RF_WA_mux: RF_WA_mux PORT MAP(
		IR_15_11 => ,
		IR_20_16 => ,
		RF_WA_MUX => ,
		WA => 
	);


