/*
 * Evil code
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    // change a const value by accessing it as a pointer!
    const int i = 1;
    printf("const i before = %i\n", i);
    int *pi = (int *)&i;
    *pi = 9;
    printf("const i after = %i\n\n", i);

    // minus most positive unsigned number
    unsigned char max_uc = UCHAR_MAX;
    unsigned short max_us = USHRT_MAX;
    unsigned int max_ui = UINT_MAX;
    unsigned long max_ul = ULONG_MAX;
    unsigned long long max_ull = ULLONG_MAX;

    printf("UCHAR_MAX: +: %d, -: %d\n", max_uc, -max_uc);
    printf("USHRT_MAX: +: %d, -: %d\n", max_us, -max_us);
    printf("UINT_MAX: +: %d, -: %d\n", max_ui, -max_ui);
    printf("ULONG_MAX: +: %ld, -: %ld\n", max_ul, -max_ul);
    printf("ULLONG_MAX: +: %lld, -: %lld\n\n", max_ull, -max_ull);

    // negate most negative value, assuming two's complement
    char min_c = CHAR_MIN;
    short min_s = SHRT_MIN;
    int min_i = INT_MIN;
    long min_l = LONG_MIN;
    long long min_ll = LLONG_MIN;
    printf("CHAR_MIN: +: %d, -: %d\n", min_c, -min_c);
    printf("SHRT_MIN: +: %d, -: %d\n", min_s, -min_s);
    printf("INT_MIN: +: %d, -: %d\n", min_i, -min_i);
    printf("LONG_MIN: +: %ld, -: %ld\n", min_l, -min_l);
    printf("LLONG_MIN: +: %lld, -: %lld\n", min_ll, -min_ll);

    return EXIT_SUCCESS;
}
