/*
 * Bytes of each type example
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main(void) {
    short short1 = 1;
    int int1 = 1;
    long long1 = 1;
    long long longlong1 = 1;
    float float1 = 1.f;

    unsigned char* shortc = (unsigned char *) &short1;
    unsigned char* intc = (unsigned char *) &int1;
    unsigned char* longc = (unsigned char *) &long1;
    unsigned char* longlongc = (unsigned char *) &longlong1;
    unsigned char* floatc = (unsigned char *) &float1;

    printf("short     0x");
    for (int i = sizeof(short1) - 1; i >= 0; i--) {
        printf("%02x", shortc[i]);
    }
    printf("\n");
    printf("int       0x");
    for (int i = sizeof(int1) - 1; i >= 0; i--) {
        printf("%02x", intc[i]);
    }
    printf("\n");
    printf("long      0x");
    for (int i = sizeof(long1) - 1; i >= 0; i--) {
        printf("%02x", longc[i]);
    }
    printf("\n");
    printf("long long 0x");
    for (int i = sizeof(longlong1) - 1; i >= 0; i--) {
        printf("%02x", longlongc[i]);
    }
    printf("\n");
    printf("float     0x");
    for (int i = sizeof(float1) - 1; i >= 0; i--) {
        printf("%02x", floatc[i]);
    }
    printf("\n");
    printf("-=-=-=-=-=-=-=-\n");

    int8_t int8_t1 = 1;
    int16_t int16_t1 = 1;
    int32_t int32_t1 = 1;
    int64_t int64_t1 = 1;

    int_fast8_t int_fast8_t = 1;
    int_fast16_t int_fast16_t = 1;
    int_fast32_t int_fast32_t = 1;
    int_fast64_t int_fast64_t = 1;

    int_least8_t int_least8_t1 = 1;
    int_least16_t int_least16_t1 = 1;
    int_least32_t int_least32_t1 = 1;
    int_least64_t int_least64_t1 = 1;

    intmax_t intmax_t1 = 1;

    uint8_t uint8_t1 = 1;
    uint16_t uint16_t1 = 1;
    uint32_t uint32_t1 = 1;
    uint64_t uint64_t1 = 1;

    uint_fast8_t uint_fast8_t1 = 1;
    uint_fast16_t uint_fast16_t1 = 1;
    uint_fast32_t uint_fast32_t1 = 1;
    uint_fast64_t uint_fast64_t1 = 1;

    uint_least8_t uint_least8_t1 = 1;
    uint_least16_t uint_least16_t1 = 1;
    uint_least32_t uint_least32_t1 = 1;
    uint_least64_t uint_least64_t1 = 1;

    uintmax_t uintmax_t1 = 1;
    uintptr_t uintptr_t1 = 1;

    printf("int8        %dB int16        %dB int32        %dB int64        %dB\n", sizeof(int8_t1), sizeof(int16_t1), sizeof(int32_t1), sizeof(int64_t1));
    printf("uint8       %dB uint16       %dB uint32       %dB uint64       %dB\n", sizeof(uint8_t1), sizeof(uint16_t1), sizeof(uint32_t1), sizeof(uint64_t1));
    printf("int_fast8   %dB int_fast16   %dB int_fast32   %dB int_fast64   %dB\n", sizeof(int_fast8_t), sizeof(int_fast16_t), sizeof(int_fast32_t), sizeof(int_fast64_t));
    printf("uint_fast8  %dB uint_fast16  %dB uint_fast32  %dB uint_fast64  %dB\n", sizeof(uint_fast8_t1), sizeof(uint_fast16_t1), sizeof(uint_fast32_t1), sizeof(uint_fast64_t1));
    printf("int_least8  %dB int_least16  %dB int_least32  %dB int_least64  %dB\n", sizeof(int_least8_t1), sizeof(int_least16_t1), sizeof(int_least32_t1), sizeof(int_least64_t1));
    printf("uint_least8 %dB uint_least16 %dB uint_least32 %dB uint_least64 %dB\n", sizeof(uint_least8_t1), sizeof(uint_least16_t1), sizeof(uint_least32_t1), sizeof(uint_least64_t1));
    printf("-=-=-=-=-=-=-=-\n");
    printf("intmax %dB\n", sizeof(intmax_t1));
    printf("uintmax %dB\n", sizeof(uintmax_t1));
    printf("uintptr %dB\n", sizeof(uintptr_t1));

    return EXIT_SUCCESS;
}
