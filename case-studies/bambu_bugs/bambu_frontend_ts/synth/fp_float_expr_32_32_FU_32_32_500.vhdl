--------------------------------------------------------------------------------
--                          Fix2FP_0_31_S_8_23_LZOCS
--                  (LZOCShifter_31_to_32_counting_32_uid9)
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

entity Fix2FP_0_31_S_8_23_LZOCS is
   port ( clk, rst : in std_logic;
          I : in  std_logic_vector(30 downto 0);
          OZb : in std_logic;
          Count : out  std_logic_vector(4 downto 0);
          O : out  std_logic_vector(31 downto 0)   );
end entity;

architecture arch of Fix2FP_0_31_S_8_23_LZOCS is
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

   O <= level0&(0 downto 0 => '0');
   sCount <= count4_d3 & count3_d3 & count2_d2 & count1_d1 & count0_d1;
   Count <= sCount;
end architecture;

--------------------------------------------------------------------------------
--                    Fix2FP_0_31_S_8_23exponentConversion
--                          (IntAdder_8_f500_uid12)
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

entity Fix2FP_0_31_S_8_23exponentConversion is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(7 downto 0);
          Y : in  std_logic_vector(7 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(7 downto 0)   );
end entity;

architecture arch of Fix2FP_0_31_S_8_23exponentConversion is
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
--                      Fix2FP_0_31_S_8_23exponentFinal
--                          (IntAdder_9_f500_uid19)
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

entity Fix2FP_0_31_S_8_23exponentFinal is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(8 downto 0);
          Y : in  std_logic_vector(8 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(8 downto 0)   );
end entity;

architecture arch of Fix2FP_0_31_S_8_23exponentFinal is
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
--                          Fix2FP_0_31_S_8_23zeroD
--                          (IntAdder_32_f500_uid26)
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

entity Fix2FP_0_31_S_8_23zeroD is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(31 downto 0);
          Y : in  std_logic_vector(31 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(31 downto 0)   );
end entity;

architecture arch of Fix2FP_0_31_S_8_23zeroD is
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
--                     Fix2FP_0_31_S_8_23_fractionConvert
--                          (IntAdder_33_f500_uid33)
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

entity Fix2FP_0_31_S_8_23_fractionConvert is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(32 downto 0);
          Y : in  std_logic_vector(32 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(32 downto 0)   );
end entity;

architecture arch of Fix2FP_0_31_S_8_23_fractionConvert is
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
--                     Fix2FP_0_31_S_8_23_oneSubstracter
--                          (IntAdder_7_f500_uid40)
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

entity Fix2FP_0_31_S_8_23_oneSubstracter is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(6 downto 0);
          Y : in  std_logic_vector(6 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(6 downto 0)   );
end entity;

architecture arch of Fix2FP_0_31_S_8_23_oneSubstracter is
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
--                      Fix2FP_0_31_S_8_23roundingAdder
--                          (IntAdder_32_f500_uid47)
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

entity Fix2FP_0_31_S_8_23roundingAdder is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(31 downto 0);
          Y : in  std_logic_vector(31 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(31 downto 0)   );
end entity;

architecture arch of Fix2FP_0_31_S_8_23roundingAdder is
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
--                  wrapped_fp_float_expr_32_32_FU_32_32_500
--                            (Fix2FP_0_31_S_8_23)
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

entity wrapped_fp_float_expr_32_32_FU_32_32_500 is
   port ( clk, rst : in std_logic;
          I : in  std_logic_vector(31 downto 0);
          O : out  std_logic_vector(8+23+2 downto 0)   );
end entity;

architecture arch of wrapped_fp_float_expr_32_32_FU_32_32_500 is
   component Fix2FP_0_31_S_8_23_LZOCS is
      port ( clk, rst : in std_logic;
             I : in  std_logic_vector(30 downto 0);
             OZb : in std_logic;
             Count : out  std_logic_vector(4 downto 0);
             O : out  std_logic_vector(31 downto 0)   );
   end component;

   component Fix2FP_0_31_S_8_23_fractionConvert is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(32 downto 0);
             Y : in  std_logic_vector(32 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(32 downto 0)   );
   end component;

   component Fix2FP_0_31_S_8_23_oneSubstracter is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(6 downto 0);
             Y : in  std_logic_vector(6 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(6 downto 0)   );
   end component;

   component Fix2FP_0_31_S_8_23exponentConversion is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(7 downto 0);
             Y : in  std_logic_vector(7 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(7 downto 0)   );
   end component;

   component Fix2FP_0_31_S_8_23exponentFinal is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(8 downto 0);
             Y : in  std_logic_vector(8 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(8 downto 0)   );
   end component;

   component Fix2FP_0_31_S_8_23roundingAdder is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(31 downto 0);
             Y : in  std_logic_vector(31 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(31 downto 0)   );
   end component;

   component Fix2FP_0_31_S_8_23zeroD is
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
signal temporalExponent :  std_logic_vector(4 downto 0);
signal temporalFraction :  std_logic_vector(31 downto 0);
signal MSB2Signal :  std_logic_vector(7 downto 0);
signal zeroPadding4Exponent :  std_logic_vector(2 downto 0);
signal valueExponent :  std_logic_vector(7 downto 0);
signal partialConvertedExponent :  std_logic_vector(7 downto 0);
signal biassOfOnes :  std_logic_vector(6 downto 0);
signal biassSignal :  std_logic_vector(7 downto 0);
signal biassSignalBit :  std_logic_vector(8 downto 0);
signal partialConvertedExponentBit :  std_logic_vector(8 downto 0);
signal sign4OU : std_logic;
signal convertedExponentBit :  std_logic_vector(8 downto 0);
signal convertedExponent :  std_logic_vector(7 downto 0);
signal underflowSignal : std_logic;
signal overflowSignal : std_logic;
signal minusOne4ZD :  std_logic_vector(31 downto 0);
signal zeroDS :  std_logic_vector(31 downto 0);
signal zeroInput, zeroInput_d1, zeroInput_d2, zeroInput_d3 : std_logic;
signal sign2vector :  std_logic_vector(31 downto 0);
signal tempConvert :  std_logic_vector(31 downto 0);
signal tempConvert0 :  std_logic_vector(32 downto 0);
signal tempPaddingAddSign :  std_logic_vector(31 downto 0);
signal tempAddSign :  std_logic_vector(32 downto 0);
signal tempFractionResult :  std_logic_vector(32 downto 0);
signal correctingExponent : std_logic;
signal fractionConverted :  std_logic_vector(22 downto 0);
signal firstBitofRest : std_logic;
signal lastBitOfFraction : std_logic;
signal minusOne :  std_logic_vector(6 downto 0);
signal fractionRemainder :  std_logic_vector(6 downto 0);
signal zeroFractionResult :  std_logic_vector(6 downto 0);
signal zeroRemainder : std_logic;
signal outputOfMux3 : std_logic;
signal outputOfMux2 : std_logic;
signal outputOfMux1 : std_logic;
signal possibleCorrector4Rounding :  std_logic_vector(31 downto 0);
signal concatenationForRounding :  std_logic_vector(31 downto 0);
signal testC :  std_logic_vector(31 downto 0);
signal testR :  std_logic_vector(31 downto 0);
signal testM : std_logic;
signal roundedResult :  std_logic_vector(31 downto 0);
signal convertedExponentAfterRounding :  std_logic_vector(7 downto 0);
signal convertedFractionAfterRounding :  std_logic_vector(22 downto 0);
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
   LZOC_component: Fix2FP_0_31_S_8_23_LZOCS  -- pipelineDepth=3 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Count => temporalExponent,
                 I => input2LZOC,
                 O => temporalFraction,
                 OZb => signSignal);
   ----------------Synchro barrier, entering cycle 3----------------
   MSB2Signal<=CONV_STD_LOGIC_VECTOR(30,8);
   zeroPadding4Exponent<=CONV_STD_LOGIC_VECTOR(0,3);
   valueExponent<= not (zeroPadding4Exponent & temporalExponent );
   exponentConversion: Fix2FP_0_31_S_8_23exponentConversion  -- pipelineDepth=0 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => '1',
                 R => partialConvertedExponent,
                 X => MSB2Signal,
                 Y => valueExponent);
   biassOfOnes<=CONV_STD_LOGIC_VECTOR(255,7);
   biassSignal<='0' & biassOfOnes;
   biassSignalBit<='0' & biassSignal;
   partialConvertedExponentBit<= '0' & partialConvertedExponent;
   sign4OU<=partialConvertedExponent(7);
   exponentFinal: Fix2FP_0_31_S_8_23exponentFinal  -- pipelineDepth=0 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => '0',
                 R => convertedExponentBit,
                 X => partialConvertedExponentBit,
                 Y => biassSignalBit);
   convertedExponent<= convertedExponentBit(7 downto 0);
   underflowSignal<= '1' when (sign4OU='1' and convertedExponentBit(8 downto 7) = "01" ) else '0' ;
   overflowSignal<= '1' when (sign4OU='0' and convertedExponentBit(8 downto 7) = "10" ) else '0' ;
   ---------------- cycle 0----------------
   minusOne4ZD<=CONV_STD_LOGIC_VECTOR(-1,32);
   zeroD: Fix2FP_0_31_S_8_23zeroD  -- pipelineDepth=0 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => '0',
                 R => zeroDS,
                 X => passedInput,
                 Y => minusOne4ZD);
   zeroInput<= zeroDS(31) and not(signSignal);
   ---------------- cycle 3----------------
   sign2vector<=(others => signSignal_d3);
   tempConvert<= sign2vector xor temporalFraction;
   tempConvert0<= '0' & tempConvert;
   tempPaddingAddSign<=(others=>'0');
   tempAddSign<=tempPaddingAddSign & signSignal_d3;
   fractionConverter: Fix2FP_0_31_S_8_23_fractionConvert  -- pipelineDepth=0 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => '0',
                 R => tempFractionResult,
                 X => tempConvert0,
                 Y => tempAddSign);
   correctingExponent<=tempFractionResult(32);
   fractionConverted<=tempFractionResult(30 downto 8);
   firstBitofRest<=tempFractionResult(7);
   lastBitOfFraction<=tempFractionResult(8);
   ---------------- cycle 3----------------
   minusOne<=CONV_STD_LOGIC_VECTOR(-1,7);
   fractionRemainder<= tempFractionResult(6 downto 0);
   oneSubstracter: Fix2FP_0_31_S_8_23_oneSubstracter  -- pipelineDepth=0 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => '0',
                 R => zeroFractionResult,
                 X => fractionRemainder,
                 Y => minusOne);
   zeroRemainder<= not( not (tempFractionResult(6)) and zeroFractionResult(6));
   outputOfMux3<=lastBitOfFraction;
   with zeroRemainder select 
   outputOfMux2 <= outputOfMux3 when '0', '1' when others;
   with firstBitofRest select 
   outputOfMux1 <= outputOfMux2 when '1', '0' when others;
   possibleCorrector4Rounding<=CONV_STD_LOGIC_VECTOR(0,8) & correctingExponent & CONV_STD_LOGIC_VECTOR(0,23);
   concatenationForRounding<= '0' & convertedExponent & fractionConverted;
   testC<= concatenationForRounding;
   testR<= possibleCorrector4Rounding;
   testM<= outputOfMux1;
   roundingAdder: Fix2FP_0_31_S_8_23roundingAdder  -- pipelineDepth=0 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => outputOfMux1,
                 R => roundedResult,
                 X => concatenationForRounding,
                 Y => possibleCorrector4Rounding);
   convertedExponentAfterRounding<= roundedResult(30 downto 23);
   convertedFractionAfterRounding<= roundedResult(22 downto 0);
   MSBSelection<= overflowSignal or roundedResult(31);
   LSBSelection<= not(underflowSignal and not(zeroInput_d3));
   Selection<= MSBSelection & LSBSelection when zeroInput_d3='0' else "00";
   specialBits <= Selection;
   O<= specialBits & signSignal_d3 & convertedExponentAfterRounding & convertedFractionAfterRounding;
end architecture;

--------------------------------------------------------------------------------
--                 out_wrap_fp_float_expr_32_32_FU_32_32_500
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

entity out_wrap_fp_float_expr_32_32_FU_32_32_500 is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(8+23+2 downto 0);
          R : out  std_logic_vector(31 downto 0)   );
end entity;

architecture arch of out_wrap_fp_float_expr_32_32_FU_32_32_500 is
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
--                              fp_float_expr_32_32_FU_32_32_500
-- Operator automatically generated by FloPoCo framework version svn-trunk
-- assemblying operators generated by the Infinite Virtual Library FloPoCoLib
-- Send any bug to: BUG_REPORT_ADDRESS
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity fp_float_expr_32_32_FU_32_32_500 is
   generic(BITSIZE_I: integer := 32; BITSIZE_O: integer := 32);
   port (
      I : in signed(BITSIZE_I-1 downto 0);
      clock : in std_logic;
      reset : in std_logic;
      O : out std_logic_vector(BITSIZE_O-1 downto 0)
      
   );
end entity;

architecture arch of fp_float_expr_32_32_FU_32_32_500 is
   component wrapped_fp_float_expr_32_32_FU_32_32_500
      port (
         clk : in std_logic;
         rst : in std_logic;
         I : in std_logic_vector(31 downto 0);
         O : out std_logic_vector(33 downto 0)
         
      );
   end component;
   component out_wrap_fp_float_expr_32_32_FU_32_32_500
      port (
         clk : in std_logic;
         rst : in std_logic;
         X : in std_logic_vector(33 downto 0);
         R : out std_logic_vector(31 downto 0)
         
      );
   end component;
   signal wireOut1 : std_logic_vector(33 downto 0);
   begin
      fu : wrapped_fp_float_expr_32_32_FU_32_32_500 port map (I => std_logic_vector(I), O => wireOut1, clk=> clock, rst=> reset);
      out1 : out_wrap_fp_float_expr_32_32_FU_32_32_500 port map (X=>wireOut1, R=>O, clk=> clock, rst=> reset);
end architecture;

