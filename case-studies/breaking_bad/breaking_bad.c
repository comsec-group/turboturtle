// var_0,var1,var_1_secret
// var_0,var_1_secret
// var_0,var_1_secret,var_2_secret,var_3_secret

#include <stdint.h>

// Breaking bad paper

#ifdef LISTING3
// uint64_t precompute(uint64_t H0, uint64_t H1) {
// uint64_t myfunc(uint64_t var_0, uint64_t var_1_secret) {
    const uint64_t R = 0xE100000000000000;
    const uint64_t carry = R * (var_1_secret & 1);
    return (var_0 >> 1) ^ carry;
}
#endif

// #define LISTING4
#ifdef LISTING4
// uint128_t operator+=(uint128_t &x) {
//     l += x.l;
//     h += x.h;
//     uint64_t carry = (l < x.l);
//     h += carry;
//     return *this;
// }
uint64_t myfunc(uint64_t var_0, uint64_t var_1, uint64_t var_0_secret, uint64_t var_1_secret) {
    uint64_t h = var_0;
    uint64_t l = var_0;
    l += var_0;
    h += var_1;
    uint64_t carry = (l < var_1_secret);
    h += carry;
    return h;
}
#endif

// #define LISTING6
#ifdef LISTING6

/*
 * Negate a boolean.
 */
static inline uint32_t
NOT(uint32_t ctl)
{
	return ctl ^ 1;
}

/*
 * Equality check: returns 1 if x == y, 0 otherwise.
 */
static inline uint32_t
EQ(uint32_t x, uint32_t y)
{
	uint32_t q;

	q = x ^ y;
	return NOT((q | -q) >> 31);
}


uint64_t myfunc(uint64_t var_0, uint64_t var_1, uint64_t var_0_secret, uint64_t var_1_secret) {
    uint64_t x[10];
    uint64_t y[10];
    uint64_t z[10];
    uint64_t mask1 = -(uint64_t)EQ(var_1_secret, 0);
    uint64_t mask2 = ~mask1;
    for (int i = 0; i < 10; i ++) {
        x[i] = (mask1 & y[i]) | (mask2 & z[i]);
    }
    return x[9];
}
#endif

#define LISTING_TEST
#ifdef LISTING_TEST

uint64_t myfunc(uint64_t var_0, uint64_t var_1_secret, uint64_t var_2_secret, uint64_t var_3_secret) {
    return var_1_secret + var_0;
}

#endif

// This one should fail
// #define OUR_EXAMPLE
#ifdef OUR_EXAMPLE
int myfunc(int var_0, int var_1_secret, int var_2_secret, int var_3_secret) {
	return var_1_secret * (var_2_secret && (var_3_secret * var_0)); // side channel
	// return var_1_secret * (var_2_secret | (var_3_secret * var_0)); // no side channel
}
#endif