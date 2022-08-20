
-- VHDL Instantiation Created from source file PC.vhd -- 13:32:55 02/27/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT PC
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		SIGN_EXTENDED : IN std_logic_vector(31 downto 0);
		ins : IN std_logic_vector(25 downto 0);
		Rs : IN std_logic_vector(31 downto 0);
		PC_Mux : IN std_logic_vector(2 downto 0);          
		PC : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_PC: PC PORT MAP(
		clk => ,
		reset => ,
		SIGN_EXTENDED => ,
		ins => ,
		Rs => ,
		PC_Mux => ,
		PC => 
	);


