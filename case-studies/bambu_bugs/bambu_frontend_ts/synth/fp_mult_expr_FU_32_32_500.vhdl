--------------------------------------------------------------------------------
--                          IntAdder_42_f500_uid267
--                     (IntAdderClassical_42_f500_uid269)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Bogdan Pasca, Florent de Dinechin (2008-2010)
--------------------------------------------------------------------------------
-- Pipeline depth: 0 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity IntAdder_42_f500_uid267 is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(41 downto 0);
          Y : in  std_logic_vector(41 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(41 downto 0)   );
end entity;

architecture arch of IntAdder_42_f500_uid267 is
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
         end if;
      end process;
   --Classical
    R <= X + Y + Cin;
end architecture;

--------------------------------------------------------------------------------
--              IntMultiplier_UsingDSP_24_24_48_unsigned_uid256
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Florent de Dinechin, Kinga Illyes, Bogdan Popa, Bogdan Pasca, 2012
--------------------------------------------------------------------------------
-- Pipeline depth: 1 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity IntMultiplier_UsingDSP_24_24_48_unsigned_uid256 is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(23 downto 0);
          Y : in  std_logic_vector(23 downto 0);
          R : out  std_logic_vector(47 downto 0)   );
end entity;

architecture arch of IntMultiplier_UsingDSP_24_24_48_unsigned_uid256 is
   component IntAdder_42_f500_uid267 is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(41 downto 0);
             Y : in  std_logic_vector(41 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(41 downto 0)   );
   end component;

signal XX_m257 :  std_logic_vector(23 downto 0);
signal YY_m257 :  std_logic_vector(23 downto 0);
signal DSP_bh258_ch0_0 :  std_logic_vector(40 downto 0);
signal heap_bh258_w47_0, heap_bh258_w47_0_d1 : std_logic;
signal heap_bh258_w46_0, heap_bh258_w46_0_d1 : std_logic;
signal heap_bh258_w45_0, heap_bh258_w45_0_d1 : std_logic;
signal heap_bh258_w44_0, heap_bh258_w44_0_d1 : std_logic;
signal heap_bh258_w43_0, heap_bh258_w43_0_d1 : std_logic;
signal heap_bh258_w42_0, heap_bh258_w42_0_d1 : std_logic;
signal heap_bh258_w41_0, heap_bh258_w41_0_d1 : std_logic;
signal heap_bh258_w40_0, heap_bh258_w40_0_d1 : std_logic;
signal heap_bh258_w39_0, heap_bh258_w39_0_d1 : std_logic;
signal heap_bh258_w38_0, heap_bh258_w38_0_d1 : std_logic;
signal heap_bh258_w37_0, heap_bh258_w37_0_d1 : std_logic;
signal heap_bh258_w36_0, heap_bh258_w36_0_d1 : std_logic;
signal heap_bh258_w35_0, heap_bh258_w35_0_d1 : std_logic;
signal heap_bh258_w34_0, heap_bh258_w34_0_d1 : std_logic;
signal heap_bh258_w33_0, heap_bh258_w33_0_d1 : std_logic;
signal heap_bh258_w32_0, heap_bh258_w32_0_d1 : std_logic;
signal heap_bh258_w31_0, heap_bh258_w31_0_d1 : std_logic;
signal heap_bh258_w30_0, heap_bh258_w30_0_d1 : std_logic;
signal heap_bh258_w29_0, heap_bh258_w29_0_d1 : std_logic;
signal heap_bh258_w28_0, heap_bh258_w28_0_d1 : std_logic;
signal heap_bh258_w27_0, heap_bh258_w27_0_d1 : std_logic;
signal heap_bh258_w26_0, heap_bh258_w26_0_d1 : std_logic;
signal heap_bh258_w25_0, heap_bh258_w25_0_d1 : std_logic;
signal heap_bh258_w24_0, heap_bh258_w24_0_d1 : std_logic;
signal heap_bh258_w23_0, heap_bh258_w23_0_d1 : std_logic;
signal heap_bh258_w22_0, heap_bh258_w22_0_d1 : std_logic;
signal heap_bh258_w21_0, heap_bh258_w21_0_d1 : std_logic;
signal heap_bh258_w20_0, heap_bh258_w20_0_d1 : std_logic;
signal heap_bh258_w19_0, heap_bh258_w19_0_d1 : std_logic;
signal heap_bh258_w18_0, heap_bh258_w18_0_d1 : std_logic;
signal heap_bh258_w17_0, heap_bh258_w17_0_d1 : std_logic;
signal heap_bh258_w16_0, heap_bh258_w16_0_d1 : std_logic;
signal heap_bh258_w15_0, heap_bh258_w15_0_d1 : std_logic;
signal heap_bh258_w14_0, heap_bh258_w14_0_d1 : std_logic;
signal heap_bh258_w13_0, heap_bh258_w13_0_d1 : std_logic;
signal heap_bh258_w12_0, heap_bh258_w12_0_d1 : std_logic;
signal heap_bh258_w11_0, heap_bh258_w11_0_d1 : std_logic;
signal heap_bh258_w10_0, heap_bh258_w10_0_d1 : std_logic;
signal heap_bh258_w9_0, heap_bh258_w9_0_d1 : std_logic;
signal heap_bh258_w8_0, heap_bh258_w8_0_d1 : std_logic;
signal heap_bh258_w7_0, heap_bh258_w7_0_d1 : std_logic;
signal DSP_bh258_ch1_0 :  std_logic_vector(40 downto 0);
signal heap_bh258_w30_1, heap_bh258_w30_1_d1 : std_logic;
signal heap_bh258_w29_1, heap_bh258_w29_1_d1 : std_logic;
signal heap_bh258_w28_1, heap_bh258_w28_1_d1 : std_logic;
signal heap_bh258_w27_1, heap_bh258_w27_1_d1 : std_logic;
signal heap_bh258_w26_1, heap_bh258_w26_1_d1 : std_logic;
signal heap_bh258_w25_1, heap_bh258_w25_1_d1 : std_logic;
signal heap_bh258_w24_1, heap_bh258_w24_1_d1 : std_logic;
signal heap_bh258_w23_1, heap_bh258_w23_1_d1 : std_logic;
signal heap_bh258_w22_1, heap_bh258_w22_1_d1 : std_logic;
signal heap_bh258_w21_1, heap_bh258_w21_1_d1 : std_logic;
signal heap_bh258_w20_1, heap_bh258_w20_1_d1 : std_logic;
signal heap_bh258_w19_1, heap_bh258_w19_1_d1 : std_logic;
signal heap_bh258_w18_1, heap_bh258_w18_1_d1 : std_logic;
signal heap_bh258_w17_1, heap_bh258_w17_1_d1 : std_logic;
signal heap_bh258_w16_1, heap_bh258_w16_1_d1 : std_logic;
signal heap_bh258_w15_1, heap_bh258_w15_1_d1 : std_logic;
signal heap_bh258_w14_1, heap_bh258_w14_1_d1 : std_logic;
signal heap_bh258_w13_1, heap_bh258_w13_1_d1 : std_logic;
signal heap_bh258_w12_1, heap_bh258_w12_1_d1 : std_logic;
signal heap_bh258_w11_1, heap_bh258_w11_1_d1 : std_logic;
signal heap_bh258_w10_1, heap_bh258_w10_1_d1 : std_logic;
signal heap_bh258_w9_1, heap_bh258_w9_1_d1 : std_logic;
signal heap_bh258_w8_1, heap_bh258_w8_1_d1 : std_logic;
signal heap_bh258_w7_1, heap_bh258_w7_1_d1 : std_logic;
signal heap_bh258_w6_0 : std_logic;
signal heap_bh258_w5_0 : std_logic;
signal heap_bh258_w4_0 : std_logic;
signal heap_bh258_w3_0 : std_logic;
signal heap_bh258_w2_0 : std_logic;
signal heap_bh258_w1_0 : std_logic;
signal heap_bh258_w0_0 : std_logic;
signal finalAdderIn0_bh258 :  std_logic_vector(41 downto 0);
signal finalAdderIn1_bh258 :  std_logic_vector(41 downto 0);
signal finalAdderCin_bh258 : std_logic;
signal finalAdderOut_bh258 :  std_logic_vector(41 downto 0);
signal tempR_bh258_0, tempR_bh258_0_d1 :  std_logic_vector(6 downto 0);
signal CompressionResult258 :  std_logic_vector(48 downto 0);
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
            heap_bh258_w47_0_d1 <=  heap_bh258_w47_0;
            heap_bh258_w46_0_d1 <=  heap_bh258_w46_0;
            heap_bh258_w45_0_d1 <=  heap_bh258_w45_0;
            heap_bh258_w44_0_d1 <=  heap_bh258_w44_0;
            heap_bh258_w43_0_d1 <=  heap_bh258_w43_0;
            heap_bh258_w42_0_d1 <=  heap_bh258_w42_0;
            heap_bh258_w41_0_d1 <=  heap_bh258_w41_0;
            heap_bh258_w40_0_d1 <=  heap_bh258_w40_0;
            heap_bh258_w39_0_d1 <=  heap_bh258_w39_0;
            heap_bh258_w38_0_d1 <=  heap_bh258_w38_0;
            heap_bh258_w37_0_d1 <=  heap_bh258_w37_0;
            heap_bh258_w36_0_d1 <=  heap_bh258_w36_0;
            heap_bh258_w35_0_d1 <=  heap_bh258_w35_0;
            heap_bh258_w34_0_d1 <=  heap_bh258_w34_0;
            heap_bh258_w33_0_d1 <=  heap_bh258_w33_0;
            heap_bh258_w32_0_d1 <=  heap_bh258_w32_0;
            heap_bh258_w31_0_d1 <=  heap_bh258_w31_0;
            heap_bh258_w30_0_d1 <=  heap_bh258_w30_0;
            heap_bh258_w29_0_d1 <=  heap_bh258_w29_0;
            heap_bh258_w28_0_d1 <=  heap_bh258_w28_0;
            heap_bh258_w27_0_d1 <=  heap_bh258_w27_0;
            heap_bh258_w26_0_d1 <=  heap_bh258_w26_0;
            heap_bh258_w25_0_d1 <=  heap_bh258_w25_0;
            heap_bh258_w24_0_d1 <=  heap_bh258_w24_0;
            heap_bh258_w23_0_d1 <=  heap_bh258_w23_0;
            heap_bh258_w22_0_d1 <=  heap_bh258_w22_0;
            heap_bh258_w21_0_d1 <=  heap_bh258_w21_0;
            heap_bh258_w20_0_d1 <=  heap_bh258_w20_0;
            heap_bh258_w19_0_d1 <=  heap_bh258_w19_0;
            heap_bh258_w18_0_d1 <=  heap_bh258_w18_0;
            heap_bh258_w17_0_d1 <=  heap_bh258_w17_0;
            heap_bh258_w16_0_d1 <=  heap_bh258_w16_0;
            heap_bh258_w15_0_d1 <=  heap_bh258_w15_0;
            heap_bh258_w14_0_d1 <=  heap_bh258_w14_0;
            heap_bh258_w13_0_d1 <=  heap_bh258_w13_0;
            heap_bh258_w12_0_d1 <=  heap_bh258_w12_0;
            heap_bh258_w11_0_d1 <=  heap_bh258_w11_0;
            heap_bh258_w10_0_d1 <=  heap_bh258_w10_0;
            heap_bh258_w9_0_d1 <=  heap_bh258_w9_0;
            heap_bh258_w8_0_d1 <=  heap_bh258_w8_0;
            heap_bh258_w7_0_d1 <=  heap_bh258_w7_0;
            heap_bh258_w30_1_d1 <=  heap_bh258_w30_1;
            heap_bh258_w29_1_d1 <=  heap_bh258_w29_1;
            heap_bh258_w28_1_d1 <=  heap_bh258_w28_1;
            heap_bh258_w27_1_d1 <=  heap_bh258_w27_1;
            heap_bh258_w26_1_d1 <=  heap_bh258_w26_1;
            heap_bh258_w25_1_d1 <=  heap_bh258_w25_1;
            heap_bh258_w24_1_d1 <=  heap_bh258_w24_1;
            heap_bh258_w23_1_d1 <=  heap_bh258_w23_1;
            heap_bh258_w22_1_d1 <=  heap_bh258_w22_1;
            heap_bh258_w21_1_d1 <=  heap_bh258_w21_1;
            heap_bh258_w20_1_d1 <=  heap_bh258_w20_1;
            heap_bh258_w19_1_d1 <=  heap_bh258_w19_1;
            heap_bh258_w18_1_d1 <=  heap_bh258_w18_1;
            heap_bh258_w17_1_d1 <=  heap_bh258_w17_1;
            heap_bh258_w16_1_d1 <=  heap_bh258_w16_1;
            heap_bh258_w15_1_d1 <=  heap_bh258_w15_1;
            heap_bh258_w14_1_d1 <=  heap_bh258_w14_1;
            heap_bh258_w13_1_d1 <=  heap_bh258_w13_1;
            heap_bh258_w12_1_d1 <=  heap_bh258_w12_1;
            heap_bh258_w11_1_d1 <=  heap_bh258_w11_1;
            heap_bh258_w10_1_d1 <=  heap_bh258_w10_1;
            heap_bh258_w9_1_d1 <=  heap_bh258_w9_1;
            heap_bh258_w8_1_d1 <=  heap_bh258_w8_1;
            heap_bh258_w7_1_d1 <=  heap_bh258_w7_1;
            tempR_bh258_0_d1 <=  tempR_bh258_0;
         end if;
      end process;
   XX_m257 <= X ;
   YY_m257 <= Y ;
   
   -- Beginning of code generated by BitHeap::generateCompressorVHDL
   -- code generated by BitHeap::generateSupertileVHDL()
   ----------------Synchro barrier, entering cycle 0----------------
   DSP_bh258_ch0_0 <= ("" & XX_m257(23 downto 0) & "") * ("" & YY_m257(23 downto 7) & "");
   heap_bh258_w47_0 <= DSP_bh258_ch0_0(40); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w46_0 <= DSP_bh258_ch0_0(39); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w45_0 <= DSP_bh258_ch0_0(38); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w44_0 <= DSP_bh258_ch0_0(37); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w43_0 <= DSP_bh258_ch0_0(36); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w42_0 <= DSP_bh258_ch0_0(35); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w41_0 <= DSP_bh258_ch0_0(34); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w40_0 <= DSP_bh258_ch0_0(33); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w39_0 <= DSP_bh258_ch0_0(32); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w38_0 <= DSP_bh258_ch0_0(31); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w37_0 <= DSP_bh258_ch0_0(30); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w36_0 <= DSP_bh258_ch0_0(29); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w35_0 <= DSP_bh258_ch0_0(28); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w34_0 <= DSP_bh258_ch0_0(27); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w33_0 <= DSP_bh258_ch0_0(26); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w32_0 <= DSP_bh258_ch0_0(25); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w31_0 <= DSP_bh258_ch0_0(24); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w30_0 <= DSP_bh258_ch0_0(23); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w29_0 <= DSP_bh258_ch0_0(22); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w28_0 <= DSP_bh258_ch0_0(21); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w27_0 <= DSP_bh258_ch0_0(20); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w26_0 <= DSP_bh258_ch0_0(19); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w25_0 <= DSP_bh258_ch0_0(18); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w24_0 <= DSP_bh258_ch0_0(17); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w23_0 <= DSP_bh258_ch0_0(16); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w22_0 <= DSP_bh258_ch0_0(15); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w21_0 <= DSP_bh258_ch0_0(14); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w20_0 <= DSP_bh258_ch0_0(13); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w19_0 <= DSP_bh258_ch0_0(12); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w18_0 <= DSP_bh258_ch0_0(11); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w17_0 <= DSP_bh258_ch0_0(10); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w16_0 <= DSP_bh258_ch0_0(9); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w15_0 <= DSP_bh258_ch0_0(8); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w14_0 <= DSP_bh258_ch0_0(7); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w13_0 <= DSP_bh258_ch0_0(6); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w12_0 <= DSP_bh258_ch0_0(5); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w11_0 <= DSP_bh258_ch0_0(4); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w10_0 <= DSP_bh258_ch0_0(3); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w9_0 <= DSP_bh258_ch0_0(2); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w8_0 <= DSP_bh258_ch0_0(1); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w7_0 <= DSP_bh258_ch0_0(0); -- cycle= 0 cp= 1.638e-09
   ----------------Synchro barrier, entering cycle 0----------------
   DSP_bh258_ch1_0 <= ("" & XX_m257(23 downto 0) & "") * ("" & YY_m257(6 downto 0) & "0000000000");
   heap_bh258_w30_1 <= DSP_bh258_ch1_0(40); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w29_1 <= DSP_bh258_ch1_0(39); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w28_1 <= DSP_bh258_ch1_0(38); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w27_1 <= DSP_bh258_ch1_0(37); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w26_1 <= DSP_bh258_ch1_0(36); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w25_1 <= DSP_bh258_ch1_0(35); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w24_1 <= DSP_bh258_ch1_0(34); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w23_1 <= DSP_bh258_ch1_0(33); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w22_1 <= DSP_bh258_ch1_0(32); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w21_1 <= DSP_bh258_ch1_0(31); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w20_1 <= DSP_bh258_ch1_0(30); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w19_1 <= DSP_bh258_ch1_0(29); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w18_1 <= DSP_bh258_ch1_0(28); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w17_1 <= DSP_bh258_ch1_0(27); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w16_1 <= DSP_bh258_ch1_0(26); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w15_1 <= DSP_bh258_ch1_0(25); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w14_1 <= DSP_bh258_ch1_0(24); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w13_1 <= DSP_bh258_ch1_0(23); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w12_1 <= DSP_bh258_ch1_0(22); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w11_1 <= DSP_bh258_ch1_0(21); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w10_1 <= DSP_bh258_ch1_0(20); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w9_1 <= DSP_bh258_ch1_0(19); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w8_1 <= DSP_bh258_ch1_0(18); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w7_1 <= DSP_bh258_ch1_0(17); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w6_0 <= DSP_bh258_ch1_0(16); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w5_0 <= DSP_bh258_ch1_0(15); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w4_0 <= DSP_bh258_ch1_0(14); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w3_0 <= DSP_bh258_ch1_0(13); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w2_0 <= DSP_bh258_ch1_0(12); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w1_0 <= DSP_bh258_ch1_0(11); -- cycle= 0 cp= 1.638e-09
   heap_bh258_w0_0 <= DSP_bh258_ch1_0(10); -- cycle= 0 cp= 1.638e-09
   ----------------Synchro barrier, entering cycle 0----------------

   -- Adding the constant bits

   ----------------Synchro barrier, entering cycle 0----------------
   ----------------Synchro barrier, entering cycle 0----------------
   ----------------Synchro barrier, entering cycle 1----------------
   finalAdderIn0_bh258 <= "0" & heap_bh258_w47_0_d1 & heap_bh258_w46_0_d1 & heap_bh258_w45_0_d1 & heap_bh258_w44_0_d1 & heap_bh258_w43_0_d1 & heap_bh258_w42_0_d1 & heap_bh258_w41_0_d1 & heap_bh258_w40_0_d1 & heap_bh258_w39_0_d1 & heap_bh258_w38_0_d1 & heap_bh258_w37_0_d1 & heap_bh258_w36_0_d1 & heap_bh258_w35_0_d1 & heap_bh258_w34_0_d1 & heap_bh258_w33_0_d1 & heap_bh258_w32_0_d1 & heap_bh258_w31_0_d1 & heap_bh258_w30_1_d1 & heap_bh258_w29_1_d1 & heap_bh258_w28_1_d1 & heap_bh258_w27_1_d1 & heap_bh258_w26_1_d1 & heap_bh258_w25_1_d1 & heap_bh258_w24_1_d1 & heap_bh258_w23_1_d1 & heap_bh258_w22_1_d1 & heap_bh258_w21_1_d1 & heap_bh258_w20_1_d1 & heap_bh258_w19_1_d1 & heap_bh258_w18_1_d1 & heap_bh258_w17_1_d1 & heap_bh258_w16_1_d1 & heap_bh258_w15_1_d1 & heap_bh258_w14_1_d1 & heap_bh258_w13_1_d1 & heap_bh258_w12_1_d1 & heap_bh258_w11_1_d1 & heap_bh258_w10_1_d1 & heap_bh258_w9_1_d1 & heap_bh258_w8_1_d1 & heap_bh258_w7_1_d1;
   finalAdderIn1_bh258 <= "0" & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & heap_bh258_w30_0_d1 & heap_bh258_w29_0_d1 & heap_bh258_w28_0_d1 & heap_bh258_w27_0_d1 & heap_bh258_w26_0_d1 & heap_bh258_w25_0_d1 & heap_bh258_w24_0_d1 & heap_bh258_w23_0_d1 & heap_bh258_w22_0_d1 & heap_bh258_w21_0_d1 & heap_bh258_w20_0_d1 & heap_bh258_w19_0_d1 & heap_bh258_w18_0_d1 & heap_bh258_w17_0_d1 & heap_bh258_w16_0_d1 & heap_bh258_w15_0_d1 & heap_bh258_w14_0_d1 & heap_bh258_w13_0_d1 & heap_bh258_w12_0_d1 & heap_bh258_w11_0_d1 & heap_bh258_w10_0_d1 & heap_bh258_w9_0_d1 & heap_bh258_w8_0_d1 & heap_bh258_w7_0_d1;
   finalAdderCin_bh258 <= '0';
      Adder_final258_0: IntAdder_42_f500_uid267  -- pipelineDepth=0 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => finalAdderCin_bh258,
                 R => finalAdderOut_bh258,
                 X => finalAdderIn0_bh258,
                 Y => finalAdderIn1_bh258);
   ----------------Synchro barrier, entering cycle 0----------------
   tempR_bh258_0 <= heap_bh258_w6_0 & heap_bh258_w5_0 & heap_bh258_w4_0 & heap_bh258_w3_0 & heap_bh258_w2_0 & heap_bh258_w1_0 & heap_bh258_w0_0; -- already compressed
   -- concatenate all the compressed chunks
   ----------------Synchro barrier, entering cycle 1----------------
   CompressionResult258 <= finalAdderOut_bh258 & tempR_bh258_0_d1;
   -- End of code generated by BitHeap::generateCompressorVHDL
   R <= CompressionResult258(47 downto 0);
end architecture;

--------------------------------------------------------------------------------
--                          IntAdder_33_f500_uid275
--                     (IntAdderClassical_33_f500_uid277)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Bogdan Pasca, Florent de Dinechin (2008-2010)
--------------------------------------------------------------------------------
-- Pipeline depth: 0 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity IntAdder_33_f500_uid275 is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(32 downto 0);
          Y : in  std_logic_vector(32 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(32 downto 0)   );
end entity;

architecture arch of IntAdder_33_f500_uid275 is
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
         end if;
      end process;
   --Classical
    R <= X + Y + Cin;
end architecture;

--------------------------------------------------------------------------------
--                     wrapped_fp_mult_expr_FU_32_32_500
--                    (FPMultiplier_8_23_8_23_8_23_uid254)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Bogdan Pasca, Florent de Dinechin 2008-2011
--------------------------------------------------------------------------------
-- Pipeline depth: 3 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity wrapped_fp_mult_expr_FU_32_32_500 is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(8+23+2 downto 0);
          Y : in  std_logic_vector(8+23+2 downto 0);
          R : out  std_logic_vector(8+23+2 downto 0)   );
end entity;

architecture arch of wrapped_fp_mult_expr_FU_32_32_500 is
   component IntAdder_33_f500_uid275 is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(32 downto 0);
             Y : in  std_logic_vector(32 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(32 downto 0)   );
   end component;

   component IntMultiplier_UsingDSP_24_24_48_unsigned_uid256 is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(23 downto 0);
             Y : in  std_logic_vector(23 downto 0);
             R : out  std_logic_vector(47 downto 0)   );
   end component;

signal sign, sign_d1, sign_d2, sign_d3 : std_logic;
signal expX :  std_logic_vector(7 downto 0);
signal expY :  std_logic_vector(7 downto 0);
signal expSumPreSub, expSumPreSub_d1 :  std_logic_vector(9 downto 0);
signal bias, bias_d1 :  std_logic_vector(9 downto 0);
signal expSum, expSum_d1 :  std_logic_vector(9 downto 0);
signal sigX :  std_logic_vector(23 downto 0);
signal sigY :  std_logic_vector(23 downto 0);
signal sigProd :  std_logic_vector(47 downto 0);
signal excSel :  std_logic_vector(3 downto 0);
signal exc, exc_d1, exc_d2, exc_d3 :  std_logic_vector(1 downto 0);
signal norm, norm_d1 : std_logic;
signal expPostNorm :  std_logic_vector(9 downto 0);
signal sigProdExt, sigProdExt_d1, sigProdExt_d2 :  std_logic_vector(47 downto 0);
signal expSig, expSig_d1 :  std_logic_vector(32 downto 0);
signal sticky, sticky_d1 : std_logic;
signal guard, guard_d1 : std_logic;
signal round : std_logic;
signal expSigPostRound :  std_logic_vector(32 downto 0);
signal excPostNorm :  std_logic_vector(1 downto 0);
signal finalExc :  std_logic_vector(1 downto 0);
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
            sign_d1 <=  sign;
            sign_d2 <=  sign_d1;
            sign_d3 <=  sign_d2;
            expSumPreSub_d1 <=  expSumPreSub;
            bias_d1 <=  bias;
            expSum_d1 <=  expSum;
            exc_d1 <=  exc;
            exc_d2 <=  exc_d1;
            exc_d3 <=  exc_d2;
            norm_d1 <=  norm;
            sigProdExt_d1 <=  sigProdExt;
            sigProdExt_d2 <=  sigProdExt_d1;
            expSig_d1 <=  expSig;
            sticky_d1 <=  sticky;
            guard_d1 <=  guard;
         end if;
      end process;
   sign <= X(31) xor Y(31);
   expX <= X(30 downto 23);
   expY <= Y(30 downto 23);
   expSumPreSub <= ("00" & expX) + ("00" & expY);
   bias <= CONV_STD_LOGIC_VECTOR(127,10);
   ----------------Synchro barrier, entering cycle 1----------------
   expSum <= expSumPreSub_d1 - bias_d1;
   ----------------Synchro barrier, entering cycle 0----------------
   sigX <= "1" & X(22 downto 0);
   sigY <= "1" & Y(22 downto 0);
   SignificandMultiplication: IntMultiplier_UsingDSP_24_24_48_unsigned_uid256  -- pipelineDepth=1 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 R => sigProd,
                 X => sigX,
                 Y => sigY);
   ----------------Synchro barrier, entering cycle 1----------------
   ----------------Synchro barrier, entering cycle 0----------------
   excSel <= X(33 downto 32) & Y(33 downto 32);
   with excSel select 
   exc <= "00" when  "0000" | "0001" | "0100", 
          "01" when "0101",
          "10" when "0110" | "1001" | "1010" ,
          "11" when others;
   norm <= sigProd(47);
   ----------------Synchro barrier, entering cycle 2----------------
   -- exponent update
   expPostNorm <= expSum_d1 + ("000000000" & norm_d1);
   -- significand normalization shift
   sigProdExt <= sigProd(46 downto 0) & "0" when norm='1' else
                         sigProd(45 downto 0) & "00";
   ----------------Synchro barrier, entering cycle 2----------------
   expSig <= expPostNorm & sigProdExt_d1(47 downto 25);
   sticky <= sigProdExt_d1(24);
   guard <= '0' when sigProdExt_d1(23 downto 0)="000000000000000000000000" else '1';
   ----------------Synchro barrier, entering cycle 3----------------
   round <= sticky_d1 and ( (guard_d1 and not(sigProdExt_d2(25))) or (sigProdExt_d2(25) ))  ;
      RoundingAdder: IntAdder_33_f500_uid275  -- pipelineDepth=0 maxInDelay=3.8165e-10
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => round,
                 R => expSigPostRound,
                 X => expSig_d1,
                 Y => "000000000000000000000000000000000");
   with expSigPostRound(32 downto 31) select
   excPostNorm <=  "01"  when  "00",
                               "10"             when "01", 
                               "00"             when "11"|"10",
                               "11"             when others;
   with exc_d3 select 
   finalExc <= exc_d3 when  "11"|"10"|"00",
                       excPostNorm when others; 
   R <= finalExc & sign_d3 & expSigPostRound(30 downto 0);
end architecture;

--------------------------------------------------------------------------------
--                     in_wrap_fp_mult_expr_FU_32_32_500
--                          (InputIEEE_8_23_to_8_23)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Florent de Dinechin (2008)
--------------------------------------------------------------------------------
-- Pipeline depth: 0 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity in_wrap_fp_mult_expr_FU_32_32_500 is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(31 downto 0);
          R : out  std_logic_vector(8+23+2 downto 0)   );
end entity;

architecture arch of in_wrap_fp_mult_expr_FU_32_32_500 is
signal expX :  std_logic_vector(7 downto 0);
signal fracX :  std_logic_vector(22 downto 0);
signal sX : std_logic;
signal expZero : std_logic;
signal expInfty : std_logic;
signal fracZero : std_logic;
signal reprSubNormal : std_logic;
signal sfracX :  std_logic_vector(22 downto 0);
signal fracR :  std_logic_vector(22 downto 0);
signal expR :  std_logic_vector(7 downto 0);
signal infinity : std_logic;
signal zero : std_logic;
signal NaN : std_logic;
signal exnR :  std_logic_vector(1 downto 0);
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
         end if;
      end process;
   expX  <= X(30 downto 23);
   fracX  <= X(22 downto 0);
   sX  <= X(31);
   expZero  <= '1' when expX = (7 downto 0 => '0') else '0';
   expInfty  <= '1' when expX = (7 downto 0 => '1') else '0';
   fracZero <= '1' when fracX = (22 downto 0 => '0') else '0';
   reprSubNormal <= fracX(22);
   -- since we have one more exponent value than IEEE (field 0...0, value emin-1),
   -- we can represent subnormal numbers whose mantissa field begins with a 1
   sfracX <= fracX(21 downto 0) & '0' when (expZero='1' and reprSubNormal='1')    else fracX;
   fracR <= sfracX;
   -- copy exponent. This will be OK even for subnormals, zero and infty since in such cases the exn bits will prevail
   expR <= expX;
   infinity <= expInfty and fracZero;
   zero <= expZero and not reprSubNormal;
   NaN <= expInfty and not fracZero;
   exnR <= 
           "00" when zero='1' 
      else "10" when infinity='1' 
      else "11" when NaN='1' 
      else "01" ;  -- normal number
   R <= exnR & sX & expR & fracR; 
end architecture;

--------------------------------------------------------------------------------
--                     out_wrap_fp_mult_expr_FU_32_32_500
--                         (OutputIEEE_8_23_to_8_23)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: F. Ferrandi  (2009-2012)
--------------------------------------------------------------------------------
-- Pipeline depth: 0 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity out_wrap_fp_mult_expr_FU_32_32_500 is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(8+23+2 downto 0);
          R : out  std_logic_vector(31 downto 0)   );
end entity;

architecture arch of out_wrap_fp_mult_expr_FU_32_32_500 is
signal expX :  std_logic_vector(7 downto 0);
signal fracX :  std_logic_vector(22 downto 0);
signal exnX :  std_logic_vector(1 downto 0);
signal sX : std_logic;
signal expZero : std_logic;
signal sfracX :  std_logic_vector(22 downto 0);
signal fracR :  std_logic_vector(22 downto 0);
signal expR :  std_logic_vector(7 downto 0);
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
         end if;
      end process;
   expX  <= X(30 downto 23);
   fracX  <= X(22 downto 0);
   exnX  <= X(33 downto 32);
   sX  <= X(31) when (exnX = "01" or exnX = "10") else '0';
   expZero  <= '1' when expX = (7 downto 0 => '0') else '0';
   -- since we have one more exponent value than IEEE (field 0...0, value emin-1),
   -- we can represent subnormal numbers whose mantissa field begins with a 1
   sfracX <= 
      (22 downto 0 => '0') when (exnX = "00") else
      '1' & fracX(22 downto 1) when (expZero = '1' and exnX = "01") else
      fracX when (exnX = "01") else 
      (22 downto 1 => '0') & exnX(0);
   fracR <= sfracX;
   expR <=  
      (7 downto 0 => '0') when (exnX = "00") else
      expX when (exnX = "01") else 
      (7 downto 0 => '1');
   R <= sX & expR & fracR; 
end architecture;

--------------------------------------------------------------------------------
--                              fp_mult_expr_FU_32_32_500
-- Operator automatically generated by FloPoCo framework version svn-trunk
-- assemblying operators generated by the Infinite Virtual Library FloPoCoLib
-- Send any bug to: BUG_REPORT_ADDRESS
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity fp_mult_expr_FU_32_32_500 is
   generic(BITSIZE_X: integer := 32; BITSIZE_Y: integer := 32; BITSIZE_R: integer := 32);
   port (
      X : in std_logic_vector(BITSIZE_X-1 downto 0);
      Y : in std_logic_vector(BITSIZE_Y-1 downto 0);
      clock : in std_logic;
      reset : in std_logic;
      R : out std_logic_vector(BITSIZE_R-1 downto 0)
      
   );
end entity;

architecture arch of fp_mult_expr_FU_32_32_500 is
   component wrapped_fp_mult_expr_FU_32_32_500
      port (
         clk : in std_logic;
         rst : in std_logic;
         X : in std_logic_vector(33 downto 0);
         Y : in std_logic_vector(33 downto 0);
         R : out std_logic_vector(33 downto 0)
         
      );
   end component;
   component in_wrap_fp_mult_expr_FU_32_32_500
      port (
         clk : in std_logic;
         rst : in std_logic;
         X : in std_logic_vector(31 downto 0);
         R : out std_logic_vector(33 downto 0)
         
      );
   end component;
   component out_wrap_fp_mult_expr_FU_32_32_500
      port (
         clk : in std_logic;
         rst : in std_logic;
         X : in std_logic_vector(33 downto 0);
         R : out std_logic_vector(31 downto 0)
         
      );
   end component;
   signal wireIn1, wireIn2 : std_logic_vector(33 downto 0);
   signal wireOut1 : std_logic_vector(33 downto 0);
   begin
      fu : wrapped_fp_mult_expr_FU_32_32_500 port map (X => wireIn1, Y => wireIn2, R => wireOut1, clk=> clock, rst=> reset);
      in1 : in_wrap_fp_mult_expr_FU_32_32_500 port map (X=>X, R=>wireIn1, clk=> clock, rst=> reset);
      in2 : in_wrap_fp_mult_expr_FU_32_32_500 port map (X=>Y, R=>wireIn2, clk=> clock, rst=> reset);
      out1 : out_wrap_fp_mult_expr_FU_32_32_500 port map (X=>wireOut1, R=>R, clk=> clock, rst=> reset);
end architecture;

