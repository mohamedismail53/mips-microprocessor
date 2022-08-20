
-- VHDL Instantiation Created from source file MUX.vhd -- 01:05:12 02/28/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT MUX
	PORT(
		in0 : IN std_logic_vector(31 downto 0);
		in1 : IN std_logic_vector(31 downto 0);
		sel : IN std_logic;          
		output : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_MUX: MUX PORT MAP(
		in0 => ,
		in1 => ,
		sel => ,
		output => 
	);


