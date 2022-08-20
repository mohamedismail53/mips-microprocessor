
-- VHDL Instantiation Created from source file instructionmemory.vhd -- 17:25:03 04/28/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT instructionmemory
	PORT(
		pc : IN std_logic_vector(31 downto 0);          
		instruction : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_instructionmemory: instructionmemory PORT MAP(
		pc => ,
		instruction => 
	);


