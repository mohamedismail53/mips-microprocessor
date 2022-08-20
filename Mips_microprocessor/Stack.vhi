
-- VHDL Instantiation Created from source file Stack.vhd -- 02:30:30 02/28/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Stack
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		stackRead : IN std_logic;
		stackWrite : IN std_logic;
		dataIn : IN std_logic_vector(31 downto 0);          
		full_f : OUT std_logic;
		empty_f : OUT std_logic;
		dataOut : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_Stack: Stack PORT MAP(
		clk => ,
		reset => ,
		stackRead => ,
		stackWrite => ,
		full_f => ,
		empty_f => ,
		dataIn => ,
		dataOut => 
	);


