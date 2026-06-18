	// fn_arg_0_secret,fn_arg_1,fn_arg_arrout_1
	#include <stdint.h>
	uint8_t mysecretfunction(uint8_t fn_arg_0_secret, uint8_t fn_arg_1, uint8_t fn_arg_arrout_1[256])
	{
	  uint8_t var_0 = (uint8_t) 0;
	  uint8_t var_get;
	  for (int i = 0; i < 8; i++) {
	    var_get = fn_arg_arrout_1[i] + fn_arg_0_secret;
	    var_0 += fn_arg_arrout_1[var_get] + fn_arg_1 + fn_arg_0_secret;
	    fn_arg_arrout_1[var_get] = i + var_0;
	  }

	  return var_0;
	}


	#include <stdlib.h>
	#include "dynamatic/Integration.h"
	int main(void) {
	  uint8_t fn_arg_0_secret = rand() % 8;
	  uint8_t fn_arg_1 = rand() % 8;

	  uint8_t fn_arg_arrout_1[256];
	  for (int i; i < 256; i++) {
	    fn_arg_arrout_1[i] = rand() % 8;
	  }

	  CALL_KERNEL(mysecretfunction,fn_arg_0_secret,fn_arg_1,fn_arg_arrout_1);
	  return 0;
	}