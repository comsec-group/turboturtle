--------------------------------------------------------------------------------
--                     wrapped_FFdata_converter_FU_64_32
--                              (FPAssign_8_23)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Fabrizio Ferrandi (2011-2018)
--------------------------------------------------------------------------------
-- combinatorial

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity wrapped_FFdata_converter_FU_64_32 is
   port ( X : in  std_logic_vector(8+23+2 downto 0);
          R : out  std_logic_vector(8+23+2 downto 0)   );
end entity;

architecture arch of wrapped_FFdata_converter_FU_64_32 is
begin
   R <= X;
end architecture;

--------------------------------------------------------------------------------
--                     in_wrap_FFdata_converter_FU_64_32
--                         (InputIEEE_11_52_to_8_23)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: Florent de Dinechin (2008)
--------------------------------------------------------------------------------
-- combinatorial

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity in_wrap_FFdata_converter_FU_64_32 is
   port ( X : in  std_logic_vector(63 downto 0);
          R : out  std_logic_vector(8+23+2 downto 0)   );
end entity;

architecture arch of in_wrap_FFdata_converter_FU_64_32 is
signal expX :  std_logic_vector(10 downto 0);
signal fracX :  std_logic_vector(51 downto 0);
signal sX : std_logic;
signal expZero : std_logic;
signal expInfty : std_logic;
signal fracZero : std_logic;
signal unSub :  std_logic_vector(11 downto 0);
signal underflow : std_logic;
signal ovSub :  std_logic_vector(11 downto 0);
signal overflow : std_logic;
signal expXO :  std_logic_vector(7 downto 0);
signal resultLSB : std_logic;
signal roundBit : std_logic;
signal sticky : std_logic;
signal round : std_logic;
signal expfracR0 :  std_logic_vector(31 downto 0);
signal roundOverflow : std_logic;
signal fracR :  std_logic_vector(22 downto 0);
signal expR :  std_logic_vector(7 downto 0);
signal NaN : std_logic;
signal infinity : std_logic;
signal zero : std_logic;
signal exnR :  std_logic_vector(1 downto 0);
begin
   expX  <= X(62 downto 52);
   fracX  <= X(51 downto 0);
   sX  <= X(63);
   expZero  <= '1' when expX = (10 downto 0 => '0') else '0';
   expInfty  <= '1' when expX = (10 downto 0 => '1') else '0';
   fracZero <= '1' when fracX = (51 downto 0 => '0') else '0';
   -- min exponent value without underflow, biased with input bias: 896
   unSub <= ('0' & expX) - CONV_STD_LOGIC_VECTOR(896,12);
   underflow <= unSub(11);
   -- max exponent value without overflow, biased with input bias: 1151
   ovSub <= CONV_STD_LOGIC_VECTOR(1151,12)  -  ('0' & expX);
   overflow <= ovSub(11);
   -- copy exponent. Result valid only in the absence of ov/underflow
   expXO <= (not expX(7)) & expX(6 downto 0);
   -- wFO < wFI, need to round fraction
   resultLSB <= fracX(29);
   roundBit <= fracX(28);
   sticky <=  '0' when fracX(27 downto 0) = CONV_STD_LOGIC_VECTOR(0,27)   else '1';
   round <= roundBit and (sticky or resultLSB);
   -- The following addition may overflow
   expfracR0 <= ('0' & expXO & fracX(51 downto 29))  +  (CONV_STD_LOGIC_VECTOR(0,31) & round);
   roundOverflow <= expfracR0(31);
   fracR <= expfracR0(22 downto 0);
   expR <= expfracR0(30 downto 23);
   NaN <= expInfty and not fracZero;
   infinity <= (expInfty and fracZero) or (not NaN and (overflow or roundOverflow));
   zero <= expZero or underflow;
   exnR <= 
           "11" when NaN='1' 
      else "10" when infinity='1' 
      else "00" when zero='1' 
      else "01" ;  -- normal number
   R <= exnR & sX & expR & fracR; 
end architecture;

--------------------------------------------------------------------------------
--                     out_wrap_FFdata_converter_FU_64_32
--                         (OutputIEEE_8_23_to_8_23)
-- This operator is part of the Infinite Virtual Library FloPoCoLib
-- All rights reserved 
-- Authors: F. Ferrandi  (2009-2012)
--------------------------------------------------------------------------------
-- combinatorial

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
library std;
use std.textio.all;
library work;

entity out_wrap_FFdata_converter_FU_64_32 is
   port ( X : in  std_logic_vector(8+23+2 downto 0);
          R : out  std_logic_vector(31 downto 0)   );
end entity;

architecture arch of out_wrap_FFdata_converter_FU_64_32 is
signal expX :  std_logic_vector(7 downto 0);
signal fracX :  std_logic_vector(22 downto 0);
signal exnX :  std_logic_vector(1 downto 0);
signal sX : std_logic;
signal expZero : std_logic;
signal sfracX :  std_logic_vector(22 downto 0);
signal fracR :  std_logic_vector(22 downto 0);
signal expR :  std_logic_vector(7 downto 0);
begin
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
--                              FFdata_converter_FU_64_32
-- Operator automatically generated by FloPoCo framework version svn-trunk
-- assemblying operators generated by the Infinite Virtual Library FloPoCoLib
-- Send any bug to: BUG_REPORT_ADDRESS
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity FFdata_converter_FU_64_32 is
   generic(BITSIZE_X: integer := 64; BITSIZE_R: integer := 32);
   port (
      X : in std_logic_vector(BITSIZE_X-1 downto 0);
      clock : in std_logic;
      reset : in std_logic;
      R : out std_logic_vector(BITSIZE_R-1 downto 0)
      
   );
end entity;

architecture arch of FFdata_converter_FU_64_32 is
   component wrapped_FFdata_converter_FU_64_32
      port (
         X : in std_logic_vector(33 downto 0);
         R : out std_logic_vector(33 downto 0)
         
      );
   end component;
   component in_wrap_FFdata_converter_FU_64_32
      port (
         X : in std_logic_vector(63 downto 0);
         R : out std_logic_vector(33 downto 0)
         
      );
   end component;
   component out_wrap_FFdata_converter_FU_64_32
      port (
         X : in std_logic_vector(33 downto 0);
         R : out std_logic_vector(31 downto 0)
         
      );
   end component;
   signal wireIn1 : std_logic_vector(33 downto 0);
   signal wireOut1 : std_logic_vector(33 downto 0);
   begin
      fu : wrapped_FFdata_converter_FU_64_32 port map (X => wireIn1, R => wireOut1);
      in1 : in_wrap_FFdata_converter_FU_64_32 port map (X=>X, R=>wireIn1);
      out1 : out_wrap_FFdata_converter_FU_64_32 port map (X=>wireOut1, R=>R);
end architecture;

