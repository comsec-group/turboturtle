--------------------------------------------------------------------------------
--                          IntAdder_66_f500_uid194
--                    (IntAdderAlternative_66_f500_uid198)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Bogdan Pasca, Florent de Dinechin (2008-2010)
--------------------------------------------------------------------------------
-- Pipeline depth: 1 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity IntAdder_66_f500_uid194 is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(65 downto 0);
          Y : in  std_logic_vector(65 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(65 downto 0)   );
end entity;

architecture arch of IntAdder_66_f500_uid194 is
signal s_sum_l0_idx0 :  std_logic_vector(64 downto 0);
signal s_sum_l0_idx1, s_sum_l0_idx1_d1 :  std_logic_vector(2 downto 0);
signal sum_l0_idx0, sum_l0_idx0_d1 :  std_logic_vector(63 downto 0);
signal c_l0_idx0, c_l0_idx0_d1 :  std_logic_vector(0 downto 0);
signal sum_l0_idx1 :  std_logic_vector(1 downto 0);
signal c_l0_idx1 :  std_logic_vector(0 downto 0);
signal s_sum_l1_idx1 :  std_logic_vector(2 downto 0);
signal sum_l1_idx1 :  std_logic_vector(1 downto 0);
signal c_l1_idx1 :  std_logic_vector(0 downto 0);
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
            s_sum_l0_idx1_d1 <=  s_sum_l0_idx1;
            sum_l0_idx0_d1 <=  sum_l0_idx0;
            c_l0_idx0_d1 <=  c_l0_idx0;
         end if;
      end process;
   --Alternative
   s_sum_l0_idx0 <= ( "0" & X(63 downto 0)) + ( "0" & Y(63 downto 0)) + Cin;
   s_sum_l0_idx1 <= ( "0" & X(65 downto 64)) + ( "0" & Y(65 downto 64));
   sum_l0_idx0 <= s_sum_l0_idx0(63 downto 0);
   c_l0_idx0 <= s_sum_l0_idx0(64 downto 64);
   sum_l0_idx1 <= s_sum_l0_idx1(1 downto 0);
   c_l0_idx1 <= s_sum_l0_idx1(2 downto 2);
   ----------------Synchro barrier, entering cycle 1----------------
   s_sum_l1_idx1 <=  s_sum_l0_idx1_d1 + c_l0_idx0_d1(0 downto 0);
   sum_l1_idx1 <= s_sum_l1_idx1(1 downto 0);
   c_l1_idx1 <= s_sum_l1_idx1(2 downto 2);
   R <= sum_l1_idx1(1 downto 0) & sum_l0_idx0_d1(63 downto 0);
end architecture;

--------------------------------------------------------------------------------
--                     FPAdder_11_52_uid192_RightShifter
--                     (RightShifter_53_by_max_55_uid201)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Bogdan Pasca, Florent de Dinechin (2008-2011)
--------------------------------------------------------------------------------
-- Pipeline depth: 6 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity FPAdder_11_52_uid192_RightShifter is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(52 downto 0);
          S : in  std_logic_vector(5 downto 0);
          R : out  std_logic_vector(107 downto 0)   );
end entity;

architecture arch of FPAdder_11_52_uid192_RightShifter is
signal level0, level0_d1 :  std_logic_vector(52 downto 0);
signal ps, ps_d1, ps_d2, ps_d3, ps_d4, ps_d5, ps_d6 :  std_logic_vector(5 downto 0);
signal level1, level1_d1 :  std_logic_vector(53 downto 0);
signal level2, level2_d1 :  std_logic_vector(55 downto 0);
signal level3, level3_d1 :  std_logic_vector(59 downto 0);
signal level4, level4_d1 :  std_logic_vector(67 downto 0);
signal level5, level5_d1 :  std_logic_vector(83 downto 0);
signal level6 :  std_logic_vector(115 downto 0);
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
            level0_d1 <=  level0;
            ps_d1 <=  ps;
            ps_d2 <=  ps_d1;
            ps_d3 <=  ps_d2;
            ps_d4 <=  ps_d3;
            ps_d5 <=  ps_d4;
            ps_d6 <=  ps_d5;
            level1_d1 <=  level1;
            level2_d1 <=  level2;
            level3_d1 <=  level3;
            level4_d1 <=  level4;
            level5_d1 <=  level5;
         end if;
      end process;
   level0<= X;
   ps<= S;
   ----------------Synchro barrier, entering cycle 1----------------
   level1<=  (0 downto 0 => '0') & level0_d1 when ps_d1(0) = '1' else    level0_d1 & (0 downto 0 => '0');
   ----------------Synchro barrier, entering cycle 2----------------
   level2<=  (1 downto 0 => '0') & level1_d1 when ps_d2(1) = '1' else    level1_d1 & (1 downto 0 => '0');
   ----------------Synchro barrier, entering cycle 3----------------
   level3<=  (3 downto 0 => '0') & level2_d1 when ps_d3(2) = '1' else    level2_d1 & (3 downto 0 => '0');
   ----------------Synchro barrier, entering cycle 4----------------
   level4<=  (7 downto 0 => '0') & level3_d1 when ps_d4(3) = '1' else    level3_d1 & (7 downto 0 => '0');
   ----------------Synchro barrier, entering cycle 5----------------
   level5<=  (15 downto 0 => '0') & level4_d1 when ps_d5(4) = '1' else    level4_d1 & (15 downto 0 => '0');
   ----------------Synchro barrier, entering cycle 6----------------
   level6<=  (31 downto 0 => '0') & level5_d1 when ps_d6(5) = '1' else    level5_d1 & (31 downto 0 => '0');
   R <= level6(115 downto 8);
end architecture;

--------------------------------------------------------------------------------
--                          IntAdder_56_f500_uid204
--                    (IntAdderAlternative_56_f500_uid208)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Bogdan Pasca, Florent de Dinechin (2008-2010)
--------------------------------------------------------------------------------
-- Pipeline depth: 1 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity IntAdder_56_f500_uid204 is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(55 downto 0);
          Y : in  std_logic_vector(55 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(55 downto 0)   );
end entity;

architecture arch of IntAdder_56_f500_uid204 is
signal s_sum_l0_idx0 :  std_logic_vector(29 downto 0);
signal s_sum_l0_idx1, s_sum_l0_idx1_d1 :  std_logic_vector(27 downto 0);
signal sum_l0_idx0, sum_l0_idx0_d1 :  std_logic_vector(28 downto 0);
signal c_l0_idx0, c_l0_idx0_d1 :  std_logic_vector(0 downto 0);
signal sum_l0_idx1 :  std_logic_vector(26 downto 0);
signal c_l0_idx1 :  std_logic_vector(0 downto 0);
signal s_sum_l1_idx1 :  std_logic_vector(27 downto 0);
signal sum_l1_idx1 :  std_logic_vector(26 downto 0);
signal c_l1_idx1 :  std_logic_vector(0 downto 0);
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
            s_sum_l0_idx1_d1 <=  s_sum_l0_idx1;
            sum_l0_idx0_d1 <=  sum_l0_idx0;
            c_l0_idx0_d1 <=  c_l0_idx0;
         end if;
      end process;
   --Alternative
   s_sum_l0_idx0 <= ( "0" & X(28 downto 0)) + ( "0" & Y(28 downto 0)) + Cin;
   s_sum_l0_idx1 <= ( "0" & X(55 downto 29)) + ( "0" & Y(55 downto 29));
   sum_l0_idx0 <= s_sum_l0_idx0(28 downto 0);
   c_l0_idx0 <= s_sum_l0_idx0(29 downto 29);
   sum_l0_idx1 <= s_sum_l0_idx1(26 downto 0);
   c_l0_idx1 <= s_sum_l0_idx1(27 downto 27);
   ----------------Synchro barrier, entering cycle 1----------------
   s_sum_l1_idx1 <=  s_sum_l0_idx1_d1 + c_l0_idx0_d1(0 downto 0);
   sum_l1_idx1 <= s_sum_l1_idx1(26 downto 0);
   c_l1_idx1 <= s_sum_l1_idx1(27 downto 27);
   R <= sum_l1_idx1(26 downto 0) & sum_l0_idx0_d1(28 downto 0);
end architecture;

--------------------------------------------------------------------------------
--                   LZCShifter_57_to_57_counting_64_uid211
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Florent de Dinechin, Bogdan Pasca (2007)
--------------------------------------------------------------------------------
-- Pipeline depth: 4 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity LZCShifter_57_to_57_counting_64_uid211 is
   port ( clk, rst : in std_logic;
          I : in  std_logic_vector(56 downto 0);
          Count : out  std_logic_vector(5 downto 0);
          O : out  std_logic_vector(56 downto 0)   );
end entity;

architecture arch of LZCShifter_57_to_57_counting_64_uid211 is
signal level6, level6_d1 :  std_logic_vector(56 downto 0);
signal count5, count5_d1, count5_d2, count5_d3, count5_d4 : std_logic;
signal level5 :  std_logic_vector(56 downto 0);
signal count4, count4_d1, count4_d2, count4_d3 : std_logic;
signal level4, level4_d1 :  std_logic_vector(56 downto 0);
signal count3, count3_d1, count3_d2 : std_logic;
signal level3, level3_d1 :  std_logic_vector(56 downto 0);
signal count2, count2_d1, count2_d2 : std_logic;
signal level2 :  std_logic_vector(56 downto 0);
signal count1, count1_d1 : std_logic;
signal level1, level1_d1 :  std_logic_vector(56 downto 0);
signal count0 : std_logic;
signal level0 :  std_logic_vector(56 downto 0);
signal sCount :  std_logic_vector(5 downto 0);
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
            level6_d1 <=  level6;
            count5_d1 <=  count5;
            count5_d2 <=  count5_d1;
            count5_d3 <=  count5_d2;
            count5_d4 <=  count5_d3;
            count4_d1 <=  count4;
            count4_d2 <=  count4_d1;
            count4_d3 <=  count4_d2;
            level4_d1 <=  level4;
            count3_d1 <=  count3;
            count3_d2 <=  count3_d1;
            level3_d1 <=  level3;
            count2_d1 <=  count2;
            count2_d2 <=  count2_d1;
            count1_d1 <=  count1;
            level1_d1 <=  level1;
         end if;
      end process;
   level6 <= I ;
   count5<= '1' when level6(56 downto 25) = (56 downto 25=>'0') else '0';
   ----------------Synchro barrier, entering cycle 1----------------
   level5<= level6_d1(56 downto 0) when count5_d1='0' else level6_d1(24 downto 0) & (31 downto 0 => '0');

   count4<= '1' when level5(56 downto 41) = (56 downto 41=>'0') else '0';
   level4<= level5(56 downto 0) when count4='0' else level5(40 downto 0) & (15 downto 0 => '0');

   ----------------Synchro barrier, entering cycle 2----------------
   count3<= '1' when level4_d1(56 downto 49) = (56 downto 49=>'0') else '0';
   level3<= level4_d1(56 downto 0) when count3='0' else level4_d1(48 downto 0) & (7 downto 0 => '0');

   count2<= '1' when level3(56 downto 53) = (56 downto 53=>'0') else '0';
   ----------------Synchro barrier, entering cycle 3----------------
   level2<= level3_d1(56 downto 0) when count2_d1='0' else level3_d1(52 downto 0) & (3 downto 0 => '0');

   count1<= '1' when level2(56 downto 55) = (56 downto 55=>'0') else '0';
   level1<= level2(56 downto 0) when count1='0' else level2(54 downto 0) & (1 downto 0 => '0');

   ----------------Synchro barrier, entering cycle 4----------------
   count0<= '1' when level1_d1(56 downto 56) = (56 downto 56=>'0') else '0';
   level0<= level1_d1(56 downto 0) when count0='0' else level1_d1(55 downto 0) & (0 downto 0 => '0');

   O <= level0;
   sCount <= count5_d4 & count4_d3 & count3_d2 & count2_d2 & count1_d1 & count0;
   Count <= sCount;
end architecture;

--------------------------------------------------------------------------------
--                          IntAdder_66_f500_uid214
--                    (IntAdderAlternative_66_f500_uid218)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Bogdan Pasca, Florent de Dinechin (2008-2010)
--------------------------------------------------------------------------------
-- Pipeline depth: 1 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity IntAdder_66_f500_uid214 is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(65 downto 0);
          Y : in  std_logic_vector(65 downto 0);
          Cin : in std_logic;
          R : out  std_logic_vector(65 downto 0)   );
end entity;

architecture arch of IntAdder_66_f500_uid214 is
signal s_sum_l0_idx0 :  std_logic_vector(40 downto 0);
signal s_sum_l0_idx1, s_sum_l0_idx1_d1 :  std_logic_vector(26 downto 0);
signal sum_l0_idx0, sum_l0_idx0_d1 :  std_logic_vector(39 downto 0);
signal c_l0_idx0, c_l0_idx0_d1 :  std_logic_vector(0 downto 0);
signal sum_l0_idx1 :  std_logic_vector(25 downto 0);
signal c_l0_idx1 :  std_logic_vector(0 downto 0);
signal s_sum_l1_idx1 :  std_logic_vector(26 downto 0);
signal sum_l1_idx1 :  std_logic_vector(25 downto 0);
signal c_l1_idx1 :  std_logic_vector(0 downto 0);
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
            s_sum_l0_idx1_d1 <=  s_sum_l0_idx1;
            sum_l0_idx0_d1 <=  sum_l0_idx0;
            c_l0_idx0_d1 <=  c_l0_idx0;
         end if;
      end process;
   --Alternative
   s_sum_l0_idx0 <= ( "0" & X(39 downto 0)) + ( "0" & Y(39 downto 0)) + Cin;
   s_sum_l0_idx1 <= ( "0" & X(65 downto 40)) + ( "0" & Y(65 downto 40));
   sum_l0_idx0 <= s_sum_l0_idx0(39 downto 0);
   c_l0_idx0 <= s_sum_l0_idx0(40 downto 40);
   sum_l0_idx1 <= s_sum_l0_idx1(25 downto 0);
   c_l0_idx1 <= s_sum_l0_idx1(26 downto 26);
   ----------------Synchro barrier, entering cycle 1----------------
   s_sum_l1_idx1 <=  s_sum_l0_idx1_d1 + c_l0_idx0_d1(0 downto 0);
   sum_l1_idx1 <= s_sum_l1_idx1(25 downto 0);
   c_l1_idx1 <= s_sum_l1_idx1(26 downto 26);
   R <= sum_l1_idx1(25 downto 0) & sum_l0_idx0_d1(39 downto 0);
end architecture;

--------------------------------------------------------------------------------
--                      FPlt_expr_11_52value_difference
--                           (FPAdder_11_52_uid192)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Bogdan Pasca, Florent de Dinechin (2010)
--------------------------------------------------------------------------------
-- Pipeline depth: 15 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity FPlt_expr_11_52value_difference is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(11+52+2 downto 0);
          Y : in  std_logic_vector(11+52+2 downto 0);
          R : out  std_logic_vector(11+52+2 downto 0)   );
end entity;

architecture arch of FPlt_expr_11_52value_difference is
   component FPAdder_11_52_uid192_RightShifter is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(52 downto 0);
             S : in  std_logic_vector(5 downto 0);
             R : out  std_logic_vector(107 downto 0)   );
   end component;

   component IntAdder_56_f500_uid204 is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(55 downto 0);
             Y : in  std_logic_vector(55 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(55 downto 0)   );
   end component;

   component IntAdder_66_f500_uid194 is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(65 downto 0);
             Y : in  std_logic_vector(65 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(65 downto 0)   );
   end component;

   component IntAdder_66_f500_uid214 is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(65 downto 0);
             Y : in  std_logic_vector(65 downto 0);
             Cin : in std_logic;
             R : out  std_logic_vector(65 downto 0)   );
   end component;

   component LZCShifter_57_to_57_counting_64_uid211 is
      port ( clk, rst : in std_logic;
             I : in  std_logic_vector(56 downto 0);
             Count : out  std_logic_vector(5 downto 0);
             O : out  std_logic_vector(56 downto 0)   );
   end component;

signal excExpFracX :  std_logic_vector(64 downto 0);
signal excExpFracY :  std_logic_vector(64 downto 0);
signal eXmeY, eXmeY_d1 :  std_logic_vector(11 downto 0);
signal eYmeX, eYmeX_d1 :  std_logic_vector(11 downto 0);
signal addCmpOp1 :  std_logic_vector(65 downto 0);
signal addCmpOp2 :  std_logic_vector(65 downto 0);
signal cmpRes :  std_logic_vector(65 downto 0);
signal swap : std_logic;
signal newX, newX_d1, newX_d2, newX_d3, newX_d4, newX_d5, newX_d6, newX_d7 :  std_logic_vector(65 downto 0);
signal newY :  std_logic_vector(65 downto 0);
signal expX, expX_d1, expX_d2, expX_d3, expX_d4, expX_d5, expX_d6, expX_d7, expX_d8 :  std_logic_vector(10 downto 0);
signal excX :  std_logic_vector(1 downto 0);
signal excY :  std_logic_vector(1 downto 0);
signal signX, signX_d1 : std_logic;
signal signY : std_logic;
signal EffSub, EffSub_d1, EffSub_d2, EffSub_d3, EffSub_d4, EffSub_d5, EffSub_d6, EffSub_d7, EffSub_d8, EffSub_d9, EffSub_d10, EffSub_d11, EffSub_d12, EffSub_d13, EffSub_d14 : std_logic;
signal sXsYExnXY, sXsYExnXY_d1 :  std_logic_vector(5 downto 0);
signal sdExnXY :  std_logic_vector(3 downto 0);
signal fracY :  std_logic_vector(52 downto 0);
signal excRt, excRt_d1, excRt_d2, excRt_d3, excRt_d4, excRt_d5, excRt_d6, excRt_d7, excRt_d8, excRt_d9, excRt_d10, excRt_d11, excRt_d12, excRt_d13, excRt_d14 :  std_logic_vector(1 downto 0);
signal signR, signR_d1, signR_d2, signR_d3, signR_d4, signR_d5, signR_d6, signR_d7, signR_d8, signR_d9, signR_d10, signR_d11, signR_d12, signR_d13 : std_logic;
signal expDiff :  std_logic_vector(11 downto 0);
signal shiftedOut : std_logic;
signal shiftVal :  std_logic_vector(5 downto 0);
signal shiftedFracY, shiftedFracY_d1 :  std_logic_vector(107 downto 0);
signal sticky, sticky_d1 : std_logic;
signal fracYfar :  std_logic_vector(55 downto 0);
signal EffSubVector :  std_logic_vector(55 downto 0);
signal fracYfarXorOp :  std_logic_vector(55 downto 0);
signal fracXfar :  std_logic_vector(55 downto 0);
signal cInAddFar : std_logic;
signal fracAddResult :  std_logic_vector(55 downto 0);
signal fracGRS :  std_logic_vector(56 downto 0);
signal extendedExpInc, extendedExpInc_d1, extendedExpInc_d2, extendedExpInc_d3, extendedExpInc_d4, extendedExpInc_d5 :  std_logic_vector(12 downto 0);
signal nZerosNew, nZerosNew_d1 :  std_logic_vector(5 downto 0);
signal shiftedFrac, shiftedFrac_d1 :  std_logic_vector(56 downto 0);
signal updatedExp :  std_logic_vector(12 downto 0);
signal eqdiffsign, eqdiffsign_d1 : std_logic;
signal expFrac :  std_logic_vector(65 downto 0);
signal stk, stk_d1 : std_logic;
signal rnd, rnd_d1 : std_logic;
signal grd, grd_d1 : std_logic;
signal lsb, lsb_d1 : std_logic;
signal addToRoundBit : std_logic;
signal RoundedExpFrac :  std_logic_vector(65 downto 0);
signal upExc :  std_logic_vector(1 downto 0);
signal fracR :  std_logic_vector(51 downto 0);
signal expR :  std_logic_vector(10 downto 0);
signal exExpExc :  std_logic_vector(3 downto 0);
signal excRt2 :  std_logic_vector(1 downto 0);
signal excR :  std_logic_vector(1 downto 0);
signal signR2 : std_logic;
signal computedR :  std_logic_vector(65 downto 0);
signal X_d1 :  std_logic_vector(11+52+2 downto 0);
signal Y_d1 :  std_logic_vector(11+52+2 downto 0);
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
            eXmeY_d1 <=  eXmeY;
            eYmeX_d1 <=  eYmeX;
            newX_d1 <=  newX;
            newX_d2 <=  newX_d1;
            newX_d3 <=  newX_d2;
            newX_d4 <=  newX_d3;
            newX_d5 <=  newX_d4;
            newX_d6 <=  newX_d5;
            newX_d7 <=  newX_d6;
            expX_d1 <=  expX;
            expX_d2 <=  expX_d1;
            expX_d3 <=  expX_d2;
            expX_d4 <=  expX_d3;
            expX_d5 <=  expX_d4;
            expX_d6 <=  expX_d5;
            expX_d7 <=  expX_d6;
            expX_d8 <=  expX_d7;
            signX_d1 <=  signX;
            EffSub_d1 <=  EffSub;
            EffSub_d2 <=  EffSub_d1;
            EffSub_d3 <=  EffSub_d2;
            EffSub_d4 <=  EffSub_d3;
            EffSub_d5 <=  EffSub_d4;
            EffSub_d6 <=  EffSub_d5;
            EffSub_d7 <=  EffSub_d6;
            EffSub_d8 <=  EffSub_d7;
            EffSub_d9 <=  EffSub_d8;
            EffSub_d10 <=  EffSub_d9;
            EffSub_d11 <=  EffSub_d10;
            EffSub_d12 <=  EffSub_d11;
            EffSub_d13 <=  EffSub_d12;
            EffSub_d14 <=  EffSub_d13;
            sXsYExnXY_d1 <=  sXsYExnXY;
            excRt_d1 <=  excRt;
            excRt_d2 <=  excRt_d1;
            excRt_d3 <=  excRt_d2;
            excRt_d4 <=  excRt_d3;
            excRt_d5 <=  excRt_d4;
            excRt_d6 <=  excRt_d5;
            excRt_d7 <=  excRt_d6;
            excRt_d8 <=  excRt_d7;
            excRt_d9 <=  excRt_d8;
            excRt_d10 <=  excRt_d9;
            excRt_d11 <=  excRt_d10;
            excRt_d12 <=  excRt_d11;
            excRt_d13 <=  excRt_d12;
            excRt_d14 <=  excRt_d13;
            signR_d1 <=  signR;
            signR_d2 <=  signR_d1;
            signR_d3 <=  signR_d2;
            signR_d4 <=  signR_d3;
            signR_d5 <=  signR_d4;
            signR_d6 <=  signR_d5;
            signR_d7 <=  signR_d6;
            signR_d8 <=  signR_d7;
            signR_d9 <=  signR_d8;
            signR_d10 <=  signR_d9;
            signR_d11 <=  signR_d10;
            signR_d12 <=  signR_d11;
            signR_d13 <=  signR_d12;
            shiftedFracY_d1 <=  shiftedFracY;
            sticky_d1 <=  sticky;
            extendedExpInc_d1 <=  extendedExpInc;
            extendedExpInc_d2 <=  extendedExpInc_d1;
            extendedExpInc_d3 <=  extendedExpInc_d2;
            extendedExpInc_d4 <=  extendedExpInc_d3;
            extendedExpInc_d5 <=  extendedExpInc_d4;
            nZerosNew_d1 <=  nZerosNew;
            shiftedFrac_d1 <=  shiftedFrac;
            eqdiffsign_d1 <=  eqdiffsign;
            stk_d1 <=  stk;
            rnd_d1 <=  rnd;
            grd_d1 <=  grd;
            lsb_d1 <=  lsb;
            X_d1 <=  X;
            Y_d1 <=  Y;
         end if;
      end process;
-- Exponent difference and swap  --
   excExpFracX <= X(65 downto 64) & X(62 downto 0);
   excExpFracY <= Y(65 downto 64) & Y(62 downto 0);
   eXmeY <= ("0" & X(62 downto 52)) - ("0" & Y(62 downto 52));
   eYmeX <= ("0" & Y(62 downto 52)) - ("0" & X(62 downto 52));
   addCmpOp1<= "0" & excExpFracX;
   addCmpOp2<= "1" & not(excExpFracY);
   cmpAdder: IntAdder_66_f500_uid194  -- pipelineDepth=1 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => '1',
                 R => cmpRes,
                 X => addCmpOp1,
                 Y => addCmpOp2);

   ----------------Synchro barrier, entering cycle 1----------------
   swap <= cmpRes(65);
   newX <= X_d1     when swap = '0' else Y_d1;
   newY <= Y_d1     when swap = '0' else X_d1;
   expX<= newX(62 downto 52);
   excX<= newX(65 downto 64);
   excY<= newY(65 downto 64);
   signX<= newX(63);
   signY<= newY(63);
   EffSub <= signX xor signY;
   sXsYExnXY <= signX & signY & excX & excY;
   sdExnXY <= excX & excY;
   fracY <= "00000000000000000000000000000000000000000000000000000" when excY="00" else ('1' & newY(51 downto 0));
   with sXsYExnXY select 
   excRt <= "00" when "000000"|"010000"|"100000"|"110000",
      "01" when "000101"|"010101"|"100101"|"110101"|"000100"|"010100"|"100100"|"110100"|"000001"|"010001"|"100001"|"110001",
      "10" when "111010"|"001010"|"001000"|"011000"|"101000"|"111000"|"000010"|"010010"|"100010"|"110010"|"001001"|"011001"|"101001"|"111001"|"000110"|"010110"|"100110"|"110110", 
      "11" when others;
   ----------------Synchro barrier, entering cycle 2----------------
   signR<= '0' when (sXsYExnXY_d1="100000" or sXsYExnXY_d1="010000") else signX_d1;
   ---------------- cycle 1----------------
   expDiff <= eXmeY_d1 when swap = '0' else eYmeX_d1;
   shiftedOut <= '1' when (expDiff >= 54) else '0';
   shiftVal <= expDiff(5 downto 0) when shiftedOut='0' else CONV_STD_LOGIC_VECTOR(55,6) ;
   RightShifterComponent: FPAdder_11_52_uid192_RightShifter  -- pipelineDepth=6 maxInDelay=1.39395e-09
      port map ( clk  => clk,
                 rst  => rst,
                 R => shiftedFracY,
                 S => shiftVal,
                 X => fracY);
   ----------------Synchro barrier, entering cycle 7----------------
   ----------------Synchro barrier, entering cycle 8----------------
   sticky <= '0' when (shiftedFracY_d1(52 downto 0)=CONV_STD_LOGIC_VECTOR(0,52)) else '1';
   ---------------- cycle 7----------------
   ----------------Synchro barrier, entering cycle 8----------------
   fracYfar <= "0" & shiftedFracY_d1(107 downto 53);
   EffSubVector <= (55 downto 0 => EffSub_d7);
   fracYfarXorOp <= fracYfar xor EffSubVector;
   fracXfar <= "01" & (newX_d7(51 downto 0)) & "00";
   cInAddFar <= EffSub_d7 and not sticky;
   fracAdder: IntAdder_56_f500_uid204  -- pipelineDepth=1 maxInDelay=1.1173e-09
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => cInAddFar,
                 R => fracAddResult,
                 X => fracXfar,
                 Y => fracYfarXorOp);
   ----------------Synchro barrier, entering cycle 9----------------
   fracGRS<= fracAddResult & sticky_d1; 
   extendedExpInc<= ("00" & expX_d8) + '1';
   LZC_component: LZCShifter_57_to_57_counting_64_uid211  -- pipelineDepth=4 maxInDelay=8.42e-10
      port map ( clk  => clk,
                 rst  => rst,
                 Count => nZerosNew,
                 I => fracGRS,
                 O => shiftedFrac);
   ----------------Synchro barrier, entering cycle 13----------------
   ----------------Synchro barrier, entering cycle 14----------------
   updatedExp <= extendedExpInc_d5 - ("0000000" & nZerosNew_d1);
   eqdiffsign <= '1' when nZerosNew_d1="111111" else '0';
   expFrac<= updatedExp & shiftedFrac_d1(55 downto 3);
   ---------------- cycle 13----------------
   stk<= shiftedFrac(1) or shiftedFrac(0);
   rnd<= shiftedFrac(2);
   grd<= shiftedFrac(3);
   lsb<= shiftedFrac(4);
   ----------------Synchro barrier, entering cycle 14----------------
   addToRoundBit<= '0' when (lsb_d1='0' and grd_d1='1' and rnd_d1='0' and stk_d1='0')  else '1';
   roundingAdder: IntAdder_66_f500_uid214  -- pipelineDepth=1 maxInDelay=9.6065e-10
      port map ( clk  => clk,
                 rst  => rst,
                 Cin => addToRoundBit,
                 R => RoundedExpFrac,
                 X => expFrac,
                 Y => "000000000000000000000000000000000000000000000000000000000000000000");
   ---------------- cycle 15----------------
   upExc <= RoundedExpFrac(65 downto 64);
   fracR <= RoundedExpFrac(52 downto 1);
   expR <= RoundedExpFrac(63 downto 53);
   exExpExc <= upExc & excRt_d14;
   with (exExpExc) select 
   excRt2<= "00" when "0000"|"0100"|"1000"|"1100"|"1001"|"1101",
      "01" when "0001",
      "10" when "0010"|"0110"|"1010"|"1110"|"0101",
      "11" when others;
   excR <= "00" when (eqdiffsign_d1='1' and EffSub_d14='1') else excRt2;
   signR2 <= '0' when (eqdiffsign_d1='1' and EffSub_d14='1') else signR_d13;
   computedR <= excR & signR2 & expR & fracR;
   R <= computedR;
end architecture;

--------------------------------------------------------------------------------
--                       wrapped_fp_lt_expr_FU_64_1_500
--                             (FPlt_expr_11_52)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Fabrizio Ferrandi (2011-2018)
--------------------------------------------------------------------------------
-- Pipeline depth: 15 cycles

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity wrapped_fp_lt_expr_FU_64_1_500 is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(11+52+2 downto 0);
          Y : in  std_logic_vector(11+52+2 downto 0);
          R : out  std_logic_vector(0 downto 0)   );
end entity;

architecture arch of wrapped_fp_lt_expr_FU_64_1_500 is
   component FPlt_expr_11_52value_difference is
      port ( clk, rst : in std_logic;
             X : in  std_logic_vector(11+52+2 downto 0);
             Y : in  std_logic_vector(11+52+2 downto 0);
             R : out  std_logic_vector(11+52+2 downto 0)   );
   end component;

signal nX :  std_logic_vector(65 downto 0);
signal valueDiff :  std_logic_vector(65 downto 0);
begin
   process(clk)
      begin
         if clk'event and clk = '1' then
         end if;
      end process;
   nX  <= X(65 downto 64) & not(X(63)) & X(62 downto 0);
   value_difference: FPlt_expr_11_52value_difference  -- pipelineDepth=15 maxInDelay=0
      port map ( clk  => clk,
                 rst  => rst,
                 R => valueDiff,
                 X => Y,
                 Y => nX);
   ----------------Synchro barrier, entering cycle 15----------------
   R(0) <= '1' when (valueDiff(63)='0') and (valueDiff(65 downto 64) /= "00") else '0';
end architecture;

--------------------------------------------------------------------------------
--                       in_wrap_fp_lt_expr_FU_64_1_500
--                         (InputIEEE_11_52_to_11_52)
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

entity in_wrap_fp_lt_expr_FU_64_1_500 is
   port ( clk, rst : in std_logic;
          X : in  std_logic_vector(63 downto 0);
          R : out  std_logic_vector(11+52+2 downto 0)   );
end entity;

architecture arch of in_wrap_fp_lt_expr_FU_64_1_500 is
signal expX :  std_logic_vector(10 downto 0);
signal fracX :  std_logic_vector(51 downto 0);
signal sX : std_logic;
signal expZero : std_logic;
signal expInfty : std_logic;
signal fracZero : std_logic;
signal reprSubNormal : std_logic;
signal sfracX :  std_logic_vector(51 downto 0);
signal fracR :  std_logic_vector(51 downto 0);
signal expR :  std_logic_vector(10 downto 0);
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
   expX  <= X(62 downto 52);
   fracX  <= X(51 downto 0);
   sX  <= X(63);
   expZero  <= '1' when expX = (10 downto 0 => '0') else '0';
   expInfty  <= '1' when expX = (10 downto 0 => '1') else '0';
   fracZero <= '1' when fracX = (51 downto 0 => '0') else '0';
   reprSubNormal <= fracX(51);
   -- since we have one more exponent value than IEEE (field 0...0, value emin-1),
   -- we can represent subnormal numbers whose mantissa field begins with a 1
   sfracX <= fracX(50 downto 0) & '0' when (expZero='1' and reprSubNormal='1')    else fracX;
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
--                              fp_lt_expr_FU_64_1_500
-- Operator automatically generated by FloPoCo framework version svn-trunk
-- assemblying operators generated by the Infinite Virtual Library FloPoCoLib
-- Send any bug to: BUG_REPORT_ADDRESS
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity fp_lt_expr_FU_64_1_500 is
   generic(BITSIZE_X: integer := 64; BITSIZE_Y: integer := 64; BITSIZE_R: integer := 1);
   port (
      X : in std_logic_vector(BITSIZE_X-1 downto 0);
      Y : in std_logic_vector(BITSIZE_Y-1 downto 0);
      clock : in std_logic;
      reset : in std_logic;
      R : out std_logic_vector(BITSIZE_R-1 downto 0)
      
   );
end entity;

architecture arch of fp_lt_expr_FU_64_1_500 is
   component wrapped_fp_lt_expr_FU_64_1_500
      port (
         clk : in std_logic;
         rst : in std_logic;
         X : in std_logic_vector(65 downto 0);
         Y : in std_logic_vector(65 downto 0);
         R : out std_logic_vector(0 downto 0)
         
      );
   end component;
   component in_wrap_fp_lt_expr_FU_64_1_500
      port (
         clk : in std_logic;
         rst : in std_logic;
         X : in std_logic_vector(63 downto 0);
         R : out std_logic_vector(65 downto 0)
         
      );
   end component;
   signal wireIn1, wireIn2 : std_logic_vector(65 downto 0);
   begin
      fu : wrapped_fp_lt_expr_FU_64_1_500 port map (X => wireIn1, Y => wireIn2, R => R(0 downto 0), clk=> clock, rst=> reset);
      in1 : in_wrap_fp_lt_expr_FU_64_1_500 port map (X=>X, R=>wireIn1, clk=> clock, rst=> reset);
      in2 : in_wrap_fp_lt_expr_FU_64_1_500 port map (X=>Y, R=>wireIn2, clk=> clock, rst=> reset);
end architecture;

