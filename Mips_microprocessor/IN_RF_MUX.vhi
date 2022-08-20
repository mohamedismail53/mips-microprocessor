
-- VHDL Instantiation Created from source file IN_RF_MUX.vhd -- 00:15:13 02/28/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT IN_RF_MUX
	PORT(
		IN_Rf_mux : IN std_logic_vector(2 downto 0);
		SIGN_EXTENDED : IN std_logic_vector(31 downto 0);
		PC : IN std_logic_vector(31 downto 0);
		stack_out : IN std_logic_vector(31 downto 0);
		in_data : IN std_logic_vector(31 downto 0);
		Memory_out : IN std_logic_vector(31 downto 0);
		RS : IN std_logic_vector(31 downto 0);
		ALU_OUT : IN std_logic_vector(31 downto 0);          
		IN_RF : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_IN_RF_MUX: IN_RF_MUX PORT MAP(
		IN_RF => ,
		IN_Rf_mux => ,
		SIGN_EXTENDED => ,
		PC => ,
		stack_out => ,
		in_data => ,
		Memory_out => ,
		RS => ,
		ALU_OUT => 
	);


