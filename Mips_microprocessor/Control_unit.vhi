
-- VHDL Instantiation Created from source file Control_unit.vhd -- 12:38:53 02/27/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Control_unit
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		op_code : IN std_logic_vector(5 downto 0);
		ZF : IN std_logic;
		OV_F : IN std_logic;
		Alu_OUT31 : IN std_logic;          
		ALU_MUX_SIGNALS : OUT std_logic;
		ALU_SIGNALS : OUT std_logic_vector(3 downto 0);
		Alu_in2_mux : OUT std_logic;
		PC_MUX : OUT std_logic_vector(3 downto 0);
		RF_WE : OUT std_logic;
		RF_MUX_WA : OUT std_logic_vector(1 downto 0);
		RF_IN_DATA_MUX : OUT std_logic_vector(2 downto 0);
		MEM_READ : OUT std_logic;
		MEM_WRITE : OUT std_logic;
		MEM_IN_MUX : OUT std_logic;
		STACK_WRITE : OUT std_logic;
		OE : OUT std_logic;
		STACK_READ : OUT std_logic
		);
	END COMPONENT;

	Inst_Control_unit: Control_unit PORT MAP(
		clk => ,
		reset => ,
		op_code => ,
		ZF => ,
		OV_F => ,
		Alu_OUT31 => ,
		ALU_MUX_SIGNALS => ,
		ALU_SIGNALS => ,
		Alu_in2_mux => ,
		PC_MUX => ,
		RF_WE => ,
		RF_MUX_WA => ,
		RF_IN_DATA_MUX => ,
		MEM_READ => ,
		MEM_WRITE => ,
		MEM_IN_MUX => ,
		STACK_WRITE => ,
		OE => ,
		STACK_READ => 
	);


