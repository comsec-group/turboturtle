--------------------------------------------------------------------------------
--                     wrapped_FFdata_converter_FU_32_64
--                              (FPAssign_11_52)
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

entity wrapped_FFdata_converter_FU_32_64 is
   port ( X : in  std_logic_vector(11+52+2 downto 0);
          R : out  std_logic_vector(11+52+2 downto 0)   );
end entity;

architecture arch of wrapped_FFdata_converter_FU_32_64 is
begin
   R <= X;
end architecture;

--------------------------------------------------------------------------------
--                     in_wrap_FFdata_converter_FU_32_64
--                         (InputIEEE_8_23_to_11_52)
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

entity in_wrap_FFdata_converter_FU_32_64 is
   port ( X : in  std_logic_vector(31 downto 0);
          R : out  std_logic_vector(11+52+2 downto 0)   );
end entity;

architecture arch of in_wrap_FFdata_converter_FU_32_64 is
signal expX :  std_logic_vector(7 downto 0);
signal fracX :  std_logic_vector(22 downto 0);
signal sX : std_logic;
signal expZero : std_logic;
signal expInfty : std_logic;
signal fracZero : std_logic;
signal overflow : std_logic;
signal underflow : std_logic;
signal expR :  std_logic_vector(10 downto 0);
signal fracR :  std_logic_vector(51 downto 0);
signal roundOverflow : std_logic;
signal NaN : std_logic;
signal infinity : std_logic;
signal zero : std_logic;
signal exnR :  std_logic_vector(1 downto 0);
begin
   expX  <= X(30 downto 23);
   fracX  <= X(22 downto 0);
   sX  <= X(31);
   expZero  <= '1' when expX = (7 downto 0 => '0') else '0';
   expInfty  <= '1' when expX = (7 downto 0 => '1') else '0';
   fracZero <= '1' when fracX = (22 downto 0 => '0') else '0';
   overflow <= '0';--  overflow never happens for these (wE_in, wE_out)
   underflow <= '0';--  underflow never happens for these (wE_in, wE_out)
   expR <= ((10 downto 8 => '0')  & expX) + "01110000000";
   fracR <= fracX & CONV_STD_LOGIC_VECTOR(0,29);
   roundOverflow <= '0';
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
--                     out_wrap_FFdata_converter_FU_32_64
--                        (OutputIEEE_11_52_to_11_52)
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

entity out_wrap_FFdata_converter_FU_32_64 is
   port ( X : in  std_logic_vector(11+52+2 downto 0);
          R : out  std_logic_vector(63 downto 0)   );
end entity;

architecture arch of out_wrap_FFdata_converter_FU_32_64 is
signal expX :  std_logic_vector(10 downto 0);
signal fracX :  std_logic_vector(51 downto 0);
signal exnX :  std_logic_vector(1 downto 0);
signal sX : std_logic;
signal expZero : std_logic;
signal sfracX :  std_logic_vector(51 downto 0);
signal fracR :  std_logic_vector(51 downto 0);
signal expR :  std_logic_vector(10 downto 0);
begin
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
--                              FFdata_converter_FU_32_64
-- Operator automatically generated by FloPoCo framework version svn-trunk
-- assemblying operators generated by the Infinite Virtual Library FloPoCoLib
-- Send any bug to: BUG_REPORT_ADDRESS
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity FFdata_converter_FU_32_64 is
   generic(BITSIZE_X: integer := 32; BITSIZE_R: integer := 64);
   port (
      X : in std_logic_vector(BITSIZE_X-1 downto 0);
      clock : in std_logic;
      reset : in std_logic;
      R : out std_logic_vector(BITSIZE_R-1 downto 0)
      
   );
end entity;

architecture arch of FFdata_converter_FU_32_64 is
   component wrapped_FFdata_converter_FU_32_64
      port (
         X : in std_logic_vector(65 downto 0);
         R : out std_logic_vector(65 downto 0)
         
      );
   end component;
   component in_wrap_FFdata_converter_FU_32_64
      port (
         X : in std_logic_vector(31 downto 0);
         R : out std_logic_vector(65 downto 0)
         
      );
   end component;
   component out_wrap_FFdata_converter_FU_32_64
      port (
         X : in std_logic_vector(65 downto 0);
         R : out std_logic_vector(63 downto 0)
         
      );
   end component;
   signal wireIn1 : std_logic_vector(65 downto 0);
   signal wireOut1 : std_logic_vector(65 downto 0);
   begin
      fu : wrapped_FFdata_converter_FU_32_64 port map (X => wireIn1, R => wireOut1);
      in1 : in_wrap_FFdata_converter_FU_32_64 port map (X=>X, R=>wireIn1);
      out1 : out_wrap_FFdata_converter_FU_32_64 port map (X=>wireOut1, R=>R);
end architecture;

