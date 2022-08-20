
-- VHDL Instantiation Created from source file ALU.vhd -- 12:36:04 02/27/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT ALU
	PORT(
		INPUT1 : IN std_logic_vector(31 downto 0);
		INPUT2 : IN std_logic_vector(31 downto 0);
		OPERATION : IN std_logic_vector(3 downto 0);          
		CarryFlag : OUT std_logic;
		zeroFlag : OUT std_logic;
		OverflowFlag : OUT std_logic;
		ALU_OUT31 : OUT std_logic;
		OUTPUT : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_ALU: ALU PORT MAP(
		INPUT1 => ,
		INPUT2 => ,
		OPERATION => ,
		CarryFlag => ,
		zeroFlag => ,
		OverflowFlag => ,
		ALU_OUT31 => ,
		OUTPUT => 
	);


