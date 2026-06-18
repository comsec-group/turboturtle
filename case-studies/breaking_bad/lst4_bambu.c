// var_0,var_1,var_1_secret

#include <stdint.h>

// #define LISTING4         // no side channel
#define LISTING4_PLUS_MUL   // no side channel

#ifdef LISTING4
// uint128_t operator+=(uint128_t &x) {
//     l += x.l;
//     h += x.h;
//     uint64_t carry = (l < x.l);
//     h += carry;
//     return *this;
// }
uint64_t myfunc(uint64_t var_0, uint64_t var_1, uint64_t var_1_secret) {
    uint64_t h = var_0;
    uint64_t l = var_0;
    l += var_0;
    h += var_1;
    uint64_t carry = (l < var_1_secret);
    h += carry;
    return h;
}
#endif

#ifdef LISTING4_PLUS_MUL
// uint128_t operator+=(uint128_t &x) {
//     l += x.l;
//     h += x.h;
//     uint64_t carry = (l < x.l);
//     h += carry;
//     return *this;
// }
uint64_t myfunc(uint64_t var_0, uint64_t var_1, uint64_t var_1_secret) {
    uint64_t h = var_0;
    uint64_t l = var_0;
    l += var_0;
    h += var_1 * var_1;
    uint64_t carry = (l < var_1_secret);
    h += carry;
    return h;
}
#endif
