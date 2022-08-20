
-- VHDL Instantiation Created from source file ALU_SIGNALS_MUX.vhd -- 00:01:01 02/28/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT ALU_SIGNALS_MUX
	PORT(
		FUNC : IN std_logic_vector(3 downto 0);
		CU_SIGNALS : IN std_logic_vector(3 downto 0);
		SEL : IN std_logic;          
		ALU_SIGNALS : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	Inst_ALU_SIGNALS_MUX: ALU_SIGNALS_MUX PORT MAP(
		FUNC => ,
		CU_SIGNALS => ,
		SEL => ,
		ALU_SIGNALS => 
	);


