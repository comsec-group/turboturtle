// var_0,var_1,var_1_secret

#include <stdint.h>



#define LISTING6
#ifdef LISTING6

// /*
//  * Negate a boolean.
//  */
// static inline uint32_t
// NOT(uint32_t ctl)
// {
// 	return ctl ^ 1;
// }

// /*
//  * Equality check: returns 1 if x == y, 0 otherwise.
//  */
// static inline uint32_t
// EQ(uint32_t x, uint32_t y)
// {
// 	uint32_t q;

// 	q = x ^ y;
// 	return NOT((q | -q) >> 31);
// }


// uint64_t myfunc(uint64_t var_0, uint64_t var_1, uint64_t var_0_secret, uint64_t var_1_secret) {
//     uint64_t x[10];
//     uint64_t y[10];
//     uint64_t z[10];
//     // uint64_t mask1 = -(uint64_t)EQ(var_1_secret, 0);
//     uint32_t q;
// 	  q = var_1_secret ^ (uint64_t) 0;
// 	  uint64_t mask1 = -(((q | -q) >> 31) ^ 1);
//     uint64_t mask2 = ~mask1;
//     for (int i = 0; i < 10; i ++) {
//         z[i] = var_0 * var_0; // our modification: initialize with something that takes time to compute
//         // y[i] = var_1 * var_1; // our modification: initialize with something that takes time to compute
//         y[i] = var_1; // our modification: initialize with something that takes no time to compute
//         x[i] = (mask1 & y[i]) | (mask2 & z[i]);
//     }
//     return x[9];
// }

// no vulnerability with Dynamatic
uint64_t myfunc(uint64_t var_0, uint64_t var_1, uint64_t var_0_secret, uint64_t var_1_secret) {
    uint64_t x;
    uint64_t y;
    uint64_t z;

    z = var_0 * var_0; // our input: initialize with something that takes time to compute
    y = var_1;         // our input: initialize with something that takes no time to compute

    // uint64_t mask1 = -(uint64_t)EQ(var_1_secret, 0);
    uint32_t q;
	  q = var_1_secret ^ (uint64_t) 0;
	  uint64_t mask1 = -(((q | -q) >> 31) ^ 1);
    uint64_t mask2 = ~mask1;
    for (int i = 0; i < 10; i ++) {
        x = (mask1 & y) | (mask2 & z);
    }
    return x;
}
#endif

#include <stdlib.h>
#include "dynamatic/Integration.h"
int main() {
  uint64_t var_0 = (uint64_t) rand();
  uint64_t var_1 = (uint64_t) rand();
  uint64_t var_0_secret = (uint64_t) rand();
  uint64_t var_1_secret = (uint64_t) rand();
  uint64_t var_2_secret = (uint64_t) rand();
  uint64_t var_3_secret = (uint64_t) rand();
  uint64_t var_4_secret = (uint64_t) rand();
  uint64_t var_5_secret = (uint64_t) rand();
  uint64_t var_6_secret = (uint64_t) rand();
  uint64_t var_7_secret = (uint64_t) rand();
  uint64_t var_8_secret = (uint64_t) rand();
  CALL_KERNEL(myfunc,var_0, var_1, var_0_secret, var_1_secret);
  return 0;
}
