
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;


entity datamemory is
    Port (  clk : in std_logic ;
	 address : in  STD_LOGIC_VECTOR (31 downto 0);
           writedata  : in  STD_LOGIC_VECTOR (31 downto 0);
           --memread : in  STD_LOGIC;
           memwrite  : in  STD_LOGIC;
           readdata : out  STD_LOGIC_VECTOR (31 downto 0));
end datamemory;

architecture Behavioral of datamemory is
  type ram is array (0 to 255) of std_logic_vector(31 downto 0);
  signal dm : ram :=  ((others=> (others=>'0')));  -- 0x0400 0000
							                              -- 0x0400 0004
	--signal data_out_reg,data_out_next : STD_LOGIC_VECTOR (31 downto 0);
begin
	-- 0x0040 0000= 4194304 
   process(memwrite,clk)
	begin 
	
	if (clk'event and clk = '1')then
	
	if (memwrite ='1') then 
	dm(to_integer(unsigned(address))) <= writedata;
	end if ;
	
	end if ;
	end process;
--   data_out_next <= dm(to_integer(unsigned(address)));	
--   
--   data_out_reg <= data_out_next when memread ='1' else
--             data_out_reg ;

	readdata <= dm(to_integer(unsigned(address)));
end Behavioral;



