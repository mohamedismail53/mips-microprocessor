
-- VHDL Instantiation Created from source file signextension.vhd -- 13:40:49 02/27/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT signextension
	PORT(
		se_in : IN std_logic_vector(15 downto 0);          
		se_out : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_signextension: signextension PORT MAP(
		se_in => ,
		se_out => 
	);


