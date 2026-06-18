// var_0,var1,var_1_secret
// var_0,var_1_secret
// var_0,var_1_secret,var_2_secret,var_3_secret

#include <stdint.h>

// Breaking bad paper

// #define LISTING3
#ifdef LISTING3
// uint64_t precompute(uint64_t H0, uint64_t H1) {
uint64_t myfunc(uint64_t var_0, uint64_t var_1_secret) {
    const uint64_t R = 0xE100000000000000;
    const uint64_t carry = R * (var_1_secret & 1);
    return (var_0 >> 1) ^ carry;
}
#endif

uint64_t myfunc(uint64_t var_0, uint64_t var_1_secret) {
    uint64_t R = var_0 * var_0;

    const uint64_t carry = R * (var_1_secret & 1);
    return (var_0 >> 1) ^ carry;
}


