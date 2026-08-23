#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main(void) {
    fputs("intN_t / uintN_t: type with exactly N bits. This is an optional type\n\n", stdout);
    #ifdef INT8_MAX
        fprintf(stdout, "int8   %ld Bytes\n", sizeof(int8_t));
    #endif
    #ifdef INT16_MAX
        fprintf(stdout, "int16  %ld Bytes\n", sizeof(int16_t));
    #endif
    #ifdef INT32_MAX
        fprintf(stdout, "int32  %ld Bytes\n", sizeof(int32_t));
    #endif
    #ifdef INT64_MAX
        fprintf(stdout, "int64  %ld Bytes\n\n", sizeof(int64_t));
    #endif

    #ifdef UINT8_MAX
        fprintf(stdout, "uint8   %ld Bytes\n", sizeof(uint8_t));
    #endif
    #ifdef UINT16_MAX
        fprintf(stdout, "uint16  %ld Bytes\n", sizeof(uint16_t));
    #endif
    #ifdef UINT32_MAX
        fprintf(stdout, "uint32  %ld Bytes\n", sizeof(uint32_t));
    #endif
    #ifdef UINT64_MAX
        fprintf(stdout, "uint64  %ld Bytes\n\n\n", sizeof(uint64_t));
    #endif

    fputs("int_fast_t / uint_fastN_t: type with as least N bits. The fastest available type for this constraint\n\n", stdout);
    fprintf(stdout, "int_fast8   %ld Bytes\n", sizeof(int_fast8_t));
    fprintf(stdout, "int_fast16  %ld Bytes\n", sizeof(int_fast16_t));
    fprintf(stdout, "int_fast32  %ld Bytes\n", sizeof(int_fast32_t));
    fprintf(stdout, "int_fast64  %ld Bytes\n\n", sizeof(int_fast64_t));

    fprintf(stdout, "uint_fast8   %ld Bytes\n", sizeof(uint_fast8_t));
    fprintf(stdout, "uint_fast16  %ld Bytes\n", sizeof(uint_fast16_t));
    fprintf(stdout, "uint_fast32  %ld Bytes\n", sizeof(uint_fast32_t));
    fprintf(stdout, "uint_fast64  %ld Bytes\n\n\n", sizeof(uint_fast64_t));

    fputs("int_least_t / uint_leastN_t: type with as least N bits. The smallest available type for this constraint\n\n", stdout);
    fprintf(stdout, "int_least8   %ld Bytes\n", sizeof(int_least8_t));
    fprintf(stdout, "int_least16  %ld Bytes\n", sizeof(int_least16_t));
    fprintf(stdout, "int_least32  %ld Bytes\n", sizeof(int_least32_t));
    fprintf(stdout, "int_least64  %ld Bytes\n\n", sizeof(int_least64_t));

    fprintf(stdout, "uint_least8   %ld Bytes\n", sizeof(uint_least8_t));
    fprintf(stdout, "uint_least16  %ld Bytes\n", sizeof(uint_least16_t));
    fprintf(stdout, "uint_least32  %ld Bytes\n", sizeof(uint_least32_t));
    fprintf(stdout, "uint_least64  %ld Bytes\n\n\n", sizeof(uint_least64_t));

    fprintf(stdout, "intmax_t  %ld Bytes\n", sizeof(intmax_t));
    fprintf(stdout, "uintmax_t  %ld Bytes\n", sizeof(uintmax_t));

    #ifdef INTPTR_MAX
        fprintf(stdout, "intptr_t  %ld Bytes\n", sizeof(intptr_t));//optional
    #endif

    #ifdef UINTPTR_MAX
        fprintf(stdout, "uintptr_t  %ld Bytes\n", sizeof(uintptr_t));//optional
    #endif


//    short short_1 = 20;
//    int int_1 = 1;
//    long long_1 = 1;
//    long long long_long_1 = 1;
//    float float_1 = 1.f;

//    unsigned char* shortc = (unsigned char *) &short_1;
//    unsigned char* intc = (unsigned char *) &int_1;
//    unsigned char* longc = (unsigned char *) &long_1;
//    unsigned char* longlongc = (unsigned char *) &long_long_1;
//    unsigned char* floatc = (unsigned char *) &float_1;

//    printf("short     0x");
//    for (int i = sizeof(short_1) - 1; i >= 0; i--) {
//        printf("%02x", shortc[i]);
//    }
//    printf("\n");
//    printf("int       0x");
//    for (int i = sizeof(int_1) - 1; i >= 0; i--) {
//        printf("%02x", intc[i]);
//    }
//    printf("\n");
//    printf("long      0x");
//    for (int i = sizeof(long_1) - 1; i >= 0; i--) {
//        printf("%02x", longc[i]);
//    }
//    printf("\n");
//    printf("long long 0x");
//    for (int i = sizeof(long_long_1) - 1; i >= 0; i--) {
//        printf("%02x", longlongc[i]);
//    }
//    printf("\n");
//    printf("float     0x");
//    for (int i = sizeof(float_1) - 1; i >= 0; i--) {
//        printf("%02x", floatc[i]);
//    }
//    printf("\n");
//    printf("-=-=-=-=-=-=-=-\n");
//
//    int8_t int8_t1 = 1;
//    int16_t int16_t1 = 1;
//    int32_t int32_t1 = 1;
//    int64_t int64_t1 = 1;
//
//    int_fast8_t int_fast8_t1 = 1;
//    int_fast16_t int_fast16_t1 = 1;
//    int_fast32_t int_fast32_t1 = 1;
//    int_fast64_t int_fast64_t1 = 1;
//
//    int_least8_t int_least8_t1 = 1;
//    int_least16_t int_least16_t1 = 1;
//    int_least32_t int_least32_t1 = 1;
//    int_least64_t int_least64_t1 = 1;
//
//    intmax_t intmax_t1 = 1;
//
//    uint8_t uint8_t1 = 1;
//    uint16_t uint16_t1 = 1;
//    uint32_t uint32_t1 = 1;
//    uint64_t uint64_t1 = 1;
//
//    uint_fast8_t uint_fast8_t1 = 1;
//    uint_fast16_t uint_fast16_t1 = 1;
//    uint_fast32_t uint_fast32_t1 = 1;
//    uint_fast64_t uint_fast64_t1 = 1;
//
//    uint_least8_t uint_least8_t1 = 1;
//    uint_least16_t uint_least16_t1 = 1;
//    uint_least32_t uint_least32_t1 = 1;
//    uint_least64_t uint_least64_t1 = 1;
//
//    uintmax_t uintmax_t1 = 1;
//    uintptr_t uintptr_t1 = 1;

//    printf("-=-=-=-=-=-=-=-\n");
//    printf("intmax %d Bytes\n", sizeof(intmax_t1));
//    printf("uintmax %d Bytes\n", sizeof(uintmax_t1));
//    printf("uintptr %d Bytes\n", sizeof(uintptr_t1));

    return EXIT_SUCCESS;
}
