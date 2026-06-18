--------------------------------------------------------------------------------
--                          Fix2FP_0_31_S_11_52zeroD
--                          (IntAdder_32_f500_uid56)
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

entity Fix2FP_0_31_S_11_52zeroD is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(31 downto 0);
          Y : in  std_logic_vector(31 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(31 downto 0)   );
end entity;

architecture arch of Fix2FP_0_31_S_11_52zeroD is
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
--                          Fix2FP_0_31_S_11_52_LZCS
--                  (LZOCShifter_31_to_53_counting_32_uid63)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Florent de Dinechin, Bogdan Pasca (2007)
--------------------------------------------------------------------------------
-- Pipeline depth: 3 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity Fix2FP_0_31_S_11_52_LZCS is
   port ( clk, rst : in std_logic;
          I : in  std_logic_vector(30 downto 0);
          OZb : in std_logic;
          Count : out  std_logic_vector(4 downto 0);
          O : out  std_logic_vector(52 downto 0)   );
end entity;

architecture arch of Fix2FP_0_31_S_11_52_LZCS is
signal level5 :  std_logic_vector(30 downto 0);
signal sozb, sozb_d1, sozb_d2 : std_logic;
signal count4, count4_d1, count4_d2, count4_d3 : std_logic;
signal level4, level4_d1 :  std_logic_vector(30 downto 0);
signal count3, count3_d1, count3_d2, count3_d3 : std_logic;
signal level3 :  std_logic_vector(30 downto 0);
signal count2, count2_d1, count2_d2 : std_logic;
signal level2, level2_d1 :  std_logic_vector(30 downto 0);
signal count1, count1_d1 : std_logic;
signal level1, level1_d1 :  std_logic_vector(30 downto 0);
signal count0, count0_d1 : std_logic;
signal level0 :  std_logic_vector(30 downto 0);
signal sCount :  std_logic_vector(4 downto 0);
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
            sozb_d1 <=  sozb;
            sozb_d2 <=  sozb_d1;
            count4_d1 <=  count4;
            count4_d2 <=  count4_d1;
            count4_d3 <=  count4_d2;
            level4_d1 <=  level4;
            count3_d1 <=  count3;
            count3_d2 <=  count3_d1;
            count3_d3 <=  count3_d2;
            count2_d1 <=  count2;
            count2_d2 <=  count2_d1;
            level2_d1 <=  level2;
            count1_d1 <=  count1;
            level1_d1 <=  level1;
            count0_d1 <=  count0;
         end if;
      end process;
   level5 <= I ;
   sozb<= OZb;
   count4<= '1' when level5(30 downto 15) = (30 downto 15=>sozb) else '0';
   level4<= level5(30 downto 0) when count4='0' else level5(14 downto 0) & (15 downto 0 => '0');

   count3<= '1' when level4(30 downto 23) = (30 downto 23=>sozb) else '0';
   ----------------Synchro barrier, entering cycle 1----------------
   level3<= level4_d1(30 downto 0) when count3_d1='0' else level4_d1(22 downto 0) & (7 downto 0 => '0');

   count2<= '1' when level3(30 downto 27) = (30 downto 27=>sozb_d1) else '0';
   level2<= level3(30 downto 0) when count2='0' else level3(26 downto 0) & (3 downto 0 => '0');

   ----------------Synchro barrier, entering cycle 2----------------
   count1<= '1' when level2_d1(30 downto 29) = (30 downto 29=>sozb_d2) else '0';
   level1<= level2_d1(30 downto 0) when count1='0' else level2_d1(28 downto 0) & (1 downto 0 => '0');

   count0<= '1' when level1(30 downto 30) = (30 downto 30=>sozb_d2) else '0';
   ----------------Synchro barrier, entering cycle 3----------------
   level0<= level1_d1(30 downto 0) when count0_d1='0' else level1_d1(29 downto 0) & (0 downto 0 => '0');

   O <= level0&(21 downto 0 => '0');
   sCount <= count4_d3 & count3_d3 & count2_d2 & count1_d1 & count0_d1;
   Count <= sCount;
end architecture;

--------------------------------------------------------------------------------
--                    Fix2FP_0_31_S_11_52_fractionConvert
--                          (IntAdder_54_f500_uid66)
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

entity Fix2FP_0_31_S_11_52_fractionConvert is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(53 downto 0);
          Y : in  std_logic_vector(53 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(53 downto 0)   );
end entity;

architecture arch of Fix2FP_0_31_S_11_52_fractionConvert is
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
--                   Fix2FP_0_31_S_11_52exponentConversion
--                          (IntAdder_11_f500_uid73)
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

entity Fix2FP_0_31_S_11_52exponentConversion is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(10 downto 0);
          Y : in  std_logic_vector(10 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(10 downto 0)   );
end entity;

architecture arch of Fix2FP_0_31_S_11_52exponentConversion is
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
--                      Fix2FP_0_31_S_11_52exponentFinal
--                          (IntAdder_12_f500_uid80)
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

entity Fix2FP_0_31_S_11_52exponentFinal is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(11 downto 0);
          Y : in  std_logic_vector(11 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(11 downto 0)   );
end entity;

architecture arch of Fix2FP_0_31_S_11_52exponentFinal is
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
--                       Fix2FP_0_31_S_11_52expCorrect
--                          (IntAdder_12_f500_uid87)
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

entity Fix2FP_0_31_S_11_52expCorrect is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(11 downto 0);
          Y : in  std_logic_vector(11 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(11 downto 0)   );
end entity;

architecture arch of Fix2FP_0_31_S_11_52expCorrect is
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
--                  wrapped_fp_float_expr_32_64_FU_32_64_500
--                           (Fix2FP_0_31_S_11_52)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Radu Tudoran, Bogdan Pasca (2009)
--------------------------------------------------------------------------------
-- Pipeline depth: 3 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity wrapped_fp_float_expr_32_64_FU_32_64_500 is
   port ( clk, rst : in std_logic;
          I : in  std_logic_vector(31 downto 0);
          O : out  std_logic_vector(11+52+2 downto 0)   );
end entity;

architecture arch of wrapped_fp_float_expr_32_64_FU_32_64_500 is
   component Fix2FP_0_31_S_11_52_LZCS is
      port ( clk, rst : in std_logic;
             I : in  std_logic_vector(30 downto 0);
             OZb : in std_logic;
             Count : out  std_logic_vector(4 downto 0);
             O : out  std_logic_vector(52 downto 0)   );
   end component;

   component Fix2FP_0_31_S_11_52_fractionConvert is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(53 downto 0);
             Y : in  std_logic_vector(53 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(53 downto 0)   );
   end component;

   component Fix2FP_0_31_S_11_52expCorrect is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(11 downto 0);
             Y : in  std_logic_vector(11 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(11 downto 0)   );
   end component;

   component Fix2FP_0_31_S_11_52exponentConversion is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(10 downto 0);
             Y : in  std_logic_vector(10 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(10 downto 0)   );
   end component;

   component Fix2FP_0_31_S_11_52exponentFinal is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(11 downto 0);
             Y : in  std_logic_vector(11 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(11 downto 0)   );
   end component;

   component Fix2FP_0_31_S_11_52zeroD is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(31 downto 0);
             Y : in  std_logic_vector(31 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(31 downto 0)   );
   end component;

signal input :  std_logic_vector(31 downto 0);
signal signSignal, signSignal_d1, signSignal_d2, signSignal_d3 : std_logic;
signal passedInput :  std_logic_vector(31 downto 0);
signal input2LZOC :  std_logic_vector(30 downto 0);
signal minusOne4ZD :  std_logic_vector(31 downto 0);
signal zeroDS :  std_logic_vector(31 downto 0);
signal zeroInput, zeroInput_d1, zeroInput_d2, zeroInput_d3 : std_logic;
signal temporalExponent :  std_logic_vector(4 downto 0);
signal temporalFraction :  std_logic_vector(52 downto 0);
signal tfr :  std_logic_vector(52 downto 0);
signal sign2vector :  std_logic_vector(52 downto 0);
signal tempConvert :  std_logic_vector(52 downto 0);
signal tempPaddingAddSign :  std_logic_vector(52 downto 0);
signal tempAddSign :  std_logic_vector(53 downto 0);
signal tempConvert0 :  std_logic_vector(53 downto 0);
signal tempFractionResult :  std_logic_vector(53 downto 0);
signal correctingExponent : std_logic;
signal convertedFraction :  std_logic_vector(51 downto 0);
signal MSB2Signal :  std_logic_vector(10 downto 0);
signal zeroPadding4Exponent :  std_logic_vector(5 downto 0);
signal valueExponent :  std_logic_vector(10 downto 0);
signal partialConvertedExponent :  std_logic_vector(10 downto 0);
signal biassOfOnes :  std_logic_vector(9 downto 0);
signal biassSignal :  std_logic_vector(10 downto 0);
signal biassSignalBit :  std_logic_vector(11 downto 0);
signal zeroBitExponent : std_logic;
signal partialConvertedExponentBit :  std_logic_vector(11 downto 0);
signal sign4OU : std_logic;
signal convertedExponentBit :  std_logic_vector(11 downto 0);
signal OUflowSignal1 :  std_logic_vector(1 downto 0);
signal underflowSignal : std_logic;
signal overflowSignal1 : std_logic;
signal zeroInput4Exponent :  std_logic_vector(11 downto 0);
signal possibleConvertedExponent2 :  std_logic_vector(10 downto 0);
signal possibleConvertedExponent20 :  std_logic_vector(11 downto 0);
signal sign4OU2 : std_logic;
signal finalConvertedExponent :  std_logic_vector(11 downto 0);
signal convertedExponent :  std_logic_vector(10 downto 0);
signal overflowSignal2 : std_logic;
signal overflowSignal : std_logic;
signal MSBSelection : std_logic;
signal LSBSelection : std_logic;
signal Selection :  std_logic_vector(1 downto 0);
signal specialBits :  std_logic_vector(1 downto 0);
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
            signSignal_d1 <=  signSignal;
            signSignal_d2 <=  signSignal_d1;
            signSignal_d3 <=  signSignal_d2;
            zeroInput_d1 <=  zeroInput;
            zeroInput_d2 <=  zeroInput_d1;
            zeroInput_d3 <=  zeroInput_d2;
         end if;
      end process;
   input <= I;
   signSignal<=input(31);
   passedInput<=input(31 downto 0);
   input2LZOC<=passedInput(30 downto 0);
   minusOne4ZD<=CONV_STD_LOGIC_VECTOR(-1,32);
   zeroD: Fix2FP_0_31_S_11_52zeroD  -- pipelineDepth=0 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => '0',
                 R => zeroDS,
                 X => passedInput,
                 Y => minusOne4ZD);
   ---------------- cycle 0----------------
   zeroInput<= zeroDS(31) and not (signSignal);
   ---------------- cycle 0----------------
   LZOC_component: Fix2FP_0_31_S_11_52_LZCS  -- pipelineDepth=3 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Count => temporalExponent,
                 I => input2LZOC,
                 O => temporalFraction,
                 OZb => signSignal);
   ----------------Synchro barrier, entering cycle 3----------------
   ---------------- cycle 3----------------
   tfr<= temporalFraction(52 downto 0);
   sign2vector<=(others=>signSignal_d3);
   tempConvert<=sign2vector xor tfr;
   tempPaddingAddSign<=(others=>'0');
   tempAddSign<=tempPaddingAddSign & signSignal_d3;
   tempConvert0<= '0' & tempConvert;
   fractionConverter: Fix2FP_0_31_S_11_52_fractionConvert  -- pipelineDepth=0 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => '0',
                 R => tempFractionResult,
                 X => tempConvert0,
                 Y => tempAddSign);
   correctingExponent<=tempFractionResult(53);
   convertedFraction<=tempFractionResult(51 downto 0);
   ---------------- cycle 3----------------
   MSB2Signal<= CONV_STD_LOGIC_VECTOR(30,11);
   zeroPadding4Exponent<= CONV_STD_LOGIC_VECTOR(0,6);
   valueExponent<= not(zeroPadding4Exponent & temporalExponent);
   exponentConversion: Fix2FP_0_31_S_11_52exponentConversion  -- pipelineDepth=0 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => '1',
                 R => partialConvertedExponent,
                 X => MSB2Signal,
                 Y => valueExponent);
   biassOfOnes<=CONV_STD_LOGIC_VECTOR(2047,10);
   biassSignal<='0' & biassOfOnes;
   biassSignalBit<='0' & biassSignal;
   zeroBitExponent<='0';
   partialConvertedExponentBit<= '0' & partialConvertedExponent;
   sign4OU<= partialConvertedExponent(10);
   exponentFinal: Fix2FP_0_31_S_11_52exponentFinal  -- pipelineDepth=0 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => '0',
                 R => convertedExponentBit,
                 X => partialConvertedExponentBit,
                 Y => biassSignalBit);
   OUflowSignal1<= convertedExponentBit(11 downto 10);
   underflowSignal<= '1' when (sign4OU='1' and OUflowSignal1="01" ) else '0';
   overflowSignal1<= '1' when (sign4OU='0' and OUflowSignal1="10" ) else '0';
   zeroInput4Exponent<=(others=>'0');
   possibleConvertedExponent2<= convertedExponentBit(10 downto 0);
   possibleConvertedExponent20<= '0' & possibleConvertedExponent2;
   sign4OU2<= possibleConvertedExponent2(10);
   expCorrect: Fix2FP_0_31_S_11_52expCorrect  -- pipelineDepth=0 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => correctingExponent,
                 R => finalConvertedExponent,
                 X => possibleConvertedExponent20,
                 Y => zeroInput4Exponent);
   convertedExponent<= finalConvertedExponent(10 downto 0);
   overflowSignal2<= '1' when (sign4OU2='0' and finalConvertedExponent(11 downto 10) = "10" ) else '0' ;
   overflowSignal<= overflowSignal2 or overflowSignal1;
   MSBSelection<= overflowSignal;
   LSBSelection<= not(underflowSignal or zeroInput_d3);
   Selection<= MSBSelection & LSBSelection when zeroInput_d3='0' else "00";
   specialBits <= Selection;
   O<= specialBits & signSignal_d3 & convertedExponent & convertedFraction;
end architecture;

--------------------------------------------------------------------------------
--                 out_wrap_fp_float_expr_32_64_FU_32_64_500
--                        (OutputIEEE_11_52_to_11_52)
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

entity out_wrap_fp_float_expr_32_64_FU_32_64_500 is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(11+52+2 downto 0);
          R : out  std_logic_vector(63 downto 0)   );
end entity;

architecture arch of out_wrap_fp_float_expr_32_64_FU_32_64_500 is
signal expX :  std_logic_vector(10 downto 0);
signal fracX :  std_logic_vector(51 downto 0);
signal exnX :  std_logic_vector(1 downto 0);
signal sX : std_logic;
signal expZero : std_logic;
signal sfracX :  std_logic_vector(51 downto 0);
signal fracR :  std_logic_vector(51 downto 0);
signal expR :  std_logic_vector(10 downto 0);
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
         end if;
      end process;
   expX  <= X(62 downto 52);
   fracX  <= X(51 downto 0);
   exnX  <= X(65 downto 64);
   sX  <= X(63) when (exnX = "01" or exnX = "10") else '0';
   expZero  <= '1' when expX = (10 downto 0 => '0') else '0';
   -- since we have one more exponent value than IEEE (field 0...0, value emin-1),
   -- we can represent subnormal numbers whose mantissa field begins with a 1
   sfracX <= 
      (51 downto 0 => '0') when (exnX = "00") else
      '1' & fracX(51 downto 1) when (expZero = '1' and exnX = "01") else
      fracX when (exnX = "01") else 
      (51 downto 1 => '0') & exnX(0);
   fracR <= sfracX;
   expR <=  
      (10 downto 0 => '0') when (exnX = "00") else
      expX when (exnX = "01") else 
      (10 downto 0 => '1');
   R <= sX & expR & fracR; 
end architecture;

--------------------------------------------------------------------------------
--                              fp_float_expr_32_64_FU_32_64_500
-- Operator automatically generated by FloPoCo framework version svn-trunk
-- assemblying operators generated by the Infinite Virtual Library FloPoCoLib
-- Send any bug to: BUG_REPORT_ADDRESS
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity fp_float_expr_32_64_FU_32_64_500 is
   generic(BITSIZE_I: integer := 32; BITSIZE_O: integer := 64);
   port (
      I : in signed(BITSIZE_I-1 downto 0);
      clock : in std_logic;
      reset : in std_logic;
      O : out std_logic_vector(BITSIZE_O-1 downto 0)
      
   );
end entity;

architecture arch of fp_float_expr_32_64_FU_32_64_500 is
   component wrapped_fp_float_expr_32_64_FU_32_64_500
      port (
         clk : in std_logic;
         rst : in std_logic;
         I : in std_logic_vector(31 downto 0);
         O : out std_logic_vector(65 downto 0)
         
      );
   end component;
   component out_wrap_fp_float_expr_32_64_FU_32_64_500
      port (
         clk : in std_logic;
         rst : in std_logic;
         X : in std_logic_vector(65 downto 0);
         R : out std_logic_vector(63 downto 0)
         
      );
   end component;
   signal I_temp : std_logic_vector(63 downto 0);
   signal wireOut1 : std_logic_vector(65 downto 0);
   begin
      fu : wrapped_fp_float_expr_32_64_FU_32_64_500 port map (I => std_logic_vector(I), O => wireOut1, clk=> clock, rst=> reset);
      out1 : out_wrap_fp_float_expr_32_64_FU_32_64_500 port map (X=>wireOut1, R=>O, clk=> clock, rst=> reset);
end architecture;

