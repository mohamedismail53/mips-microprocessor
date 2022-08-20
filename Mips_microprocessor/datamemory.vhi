
-- VHDL Instantiation Created from source file datamemory.vhd -- 00:27:35 03/02/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT datamemory
	PORT(
		clk : IN std_logic;
		address : IN std_logic_vector(31 downto 0);
		writedata : IN std_logic_vector(31 downto 0);
		memread : IN std_logic;
		memwrite : IN std_logic;          
		readdata : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_datamemory: datamemory PORT MAP(
		clk => ,
		address => ,
		writedata => ,
		memread => ,
		memwrite => ,
		readdata => 
	);


