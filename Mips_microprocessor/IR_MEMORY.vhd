

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity instructionmemory is
    Port (
	 --clk :in std_logic ;
	 pc  : in  STD_LOGIC_VECTOR (31 downto 0);
           instruction : out  STD_LOGIC_VECTOR (31 downto 0));
end instructionmemory;

architecture Behavioral of instructionmemory is
    --signal instruction_reg, instruction_next:std_logic_vector(31 downto 0);
	 type ram is array (0 to 63) of std_logic_vector(31 downto 0);
	 signal im : ram := ( "01101000000000100000000000000110",--mov r2 ,5
                         "01100100010000000000000000000000",--mov r0 r2 	
                         "00000000010000000001000000001000",--L2 : DEC R2 
								 "01100100010000001111100000000000",--mov r31 ,r2 
								 "00000011111000001111100000001000",--dec r31
								 "00111000000000000000000000001010",--Jz l1
								 "01100100000000000001100000000000",--mov r3 ,r0
                         "00000000011000000000000000000000",--add
                         "00111111111000001111111111111110",--LOOP
                         "00101000000000000000000000000010",--j L2
                         "01011000000000000000000000000000",--out r0
                        x"4FA00C80", --pop
								 x"53C00D80", --push
								"01011100000000000000000000000000",
								"01010000000000000000000000000000",
								 --"01001100000000000010000000000000",--pop R[4]
								 --"00000000010000000001000000001001", --inc 
								 --"01011000010000100001000000000000", --xor      OUT Rs
								 --"00111111111111111111111111111101", --sll      LOOP L1
								 --"01011000010000100001000000000000", --xor      OUT Rs
								 --x"60000000", --NOP
						       
							
								--"01101000010000100000000000001010", --   -- 0x0040 0004  mov R[2],10
								 --"01101011111111110000000000001010", --  -- 0x0040 0008  MOV R[31],10
								 "00000100010111110000000000000000", --cmp 
								 "00111000000000000000000000000111", --jz 
								 x"0DA00C00", --andi
								 x"11C00D00", --cmpi
								 x"15E00E00", --ori
								 x"1A000F00", --beq

								 x"22400180", --bne
								 x"26600280", --bs
								 x"2A800380", --j
								 x"2EA00480", --jal
								 x"32C00580", --jnz
								 x"36E00680", --jr
								 x"3B000780", --jz
								 x"3F200880", --loop
								 x"43400980", --lw
								 x"47600A80", --sw  
								 x"4B800B80", --inmem 
								 --x"4FA00C80", --pop
								 --x"53C00D80", --push
								 x"57E00E80", --in 
								 x"58000F80", --out
								 x"5c000000", --hlt
								 x"60000000", --nop
								 x"64000000", --mov
								 x"68000000", --movi
								 others=> x"60000000" --nop
			);
begin
--process(clk)
			--begin
			-- 0x0040 0000 = 4194304
			--if (clk'event and clk = '1')then
			
   --instruction_reg <= instruction_next;
	 --end if;
	 --end process ;
	 --instruction_next <=im((to_integer(unsigned(pc)) ));
	 --instruction <= instruction_reg ;
	 instruction <=im((to_integer(unsigned(pc)) ));
end Behavioral;

