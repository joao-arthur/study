#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    fprintf(stdout, "Number of bits in a byte (not required to be 8): %d\n", CHAR_BIT);
    fputs("\nSigned integer type with exactly N bits (optional)\n", stdout);
    #ifdef INT8_WIDTH
        fprintf(stdout, "int8   %zu bytes  %" PRId8 "..%" PRId8 "\n", sizeof(int8_t), INT8_MIN, INT8_MAX);
    #endif
    #ifdef INT16_WIDTH
        fprintf(stdout, "int16  %zu bytes  %" PRId16 "..%" PRId16 "\n", sizeof(int16_t), INT16_MIN, INT16_MAX);
    #endif
    #ifdef INT32_WIDTH
        fprintf(stdout, "int32  %zu bytes  %" PRId32 "..%" PRId32 "\n", sizeof(int32_t), INT32_MIN, INT32_MAX);
    #endif
    #ifdef INT64_WIDTH
        fprintf(stdout, "int64  %zu bytes  %" PRId64 "..%" PRId64 "\n", sizeof(int64_t), INT64_MIN, INT64_MAX);
    #endif
    fputs("\nUnsigned integer type with exactly N bits (optional)\n", stdout);
    #ifdef UINT8_WIDTH
        fprintf(stdout, "uint8   %zu bytes  0..%" PRIu8 "\n", sizeof(uint8_t), UINT8_MAX);
    #endif
    #ifdef UINT16_WIDTH
        fprintf(stdout, "uint16  %zu bytes  0..%" PRIu16 "\n", sizeof(uint16_t), UINT16_MAX);
    #endif
    #ifdef UINT32_WIDTH
        fprintf(stdout, "uint32  %zu bytes  0..%" PRIu32 "\n", sizeof(uint32_t), UINT32_MAX);
    #endif
    #ifdef UINT64_WIDTH
        fprintf(stdout, "uint64  %zu bytes  0..%" PRIu64 "\n", sizeof(uint64_t), UINT64_MAX);
    #endif
    fputs("\n\nFastest signed integer type with at least N bits\n", stdout);
    fprintf(stdout, "int_fast8   %zu bytes  %" PRIdFAST8 "..%" PRIdFAST8 "\n", sizeof(int_fast8_t), INT_FAST8_MIN, INT_FAST8_MAX);
    fprintf(stdout, "int_fast16  %zu bytes  %" PRIdFAST16 "..%" PRIdFAST16 "\n", sizeof(int_fast16_t), INT_FAST16_MIN, INT_FAST16_MAX);
    fprintf(stdout, "int_fast32  %zu bytes  %" PRIdFAST32 "..%" PRIdFAST32 "\n", sizeof(int_fast32_t), INT_FAST32_MIN, INT_FAST32_MAX);
    fprintf(stdout, "int_fast64  %zu bytes  %" PRIdFAST64 "..%" PRIdFAST64 "\n", sizeof(int_fast64_t), INT_FAST64_MIN, INT_FAST64_MAX);
    fputs("\nFastest unsigned integer type with at least N bits\n", stdout);
    fprintf(stdout, "uint_fast8   %zu bytes  0..%" PRIuFAST8 "\n", sizeof(uint_fast8_t), UINT_FAST8_MAX);
    fprintf(stdout, "uint_fast16  %zu bytes  0..%" PRIuFAST16 "\n", sizeof(uint_fast16_t), UINT_FAST16_MAX);
    fprintf(stdout, "uint_fast32  %zu bytes  0..%" PRIuFAST32 "\n", sizeof(uint_fast32_t), UINT_FAST32_MAX);
    fprintf(stdout, "uint_fast64  %zu bytes  0..%" PRIuFAST64 "\n", sizeof(uint_fast64_t), UINT_FAST64_MAX);
    fputs("\n\nSmallest signed integer type with at least N bits\n", stdout);
    fprintf(stdout, "int_least8   %zu bytes  %" PRIdLEAST8 "..%" PRIdLEAST8 "\n", sizeof(int_least8_t), INT_LEAST8_MIN, INT_LEAST8_MAX);
    fprintf(stdout, "int_least16  %zu bytes  %" PRIdLEAST16 "..%" PRIdLEAST16 "\n", sizeof(int_least16_t), INT_LEAST16_MIN, INT_LEAST16_MAX);
    fprintf(stdout, "int_least32  %zu bytes  %" PRIdLEAST32 "..%" PRIdLEAST32 "\n", sizeof(int_least32_t), INT_LEAST32_MIN, INT_LEAST32_MAX);
    fprintf(stdout, "int_least64  %zu bytes  %" PRIdLEAST64 "..%" PRIdLEAST64 "\n", sizeof(int_least64_t), INT_LEAST64_MIN, INT_LEAST64_MAX);
    fputs("\n\nSmallest unsigned integer type with at least N bits\n", stdout);
    fprintf(stdout, "uint_least8   %zu bytes  0..%" PRIuLEAST8 "\n", sizeof(uint_least8_t), UINT_LEAST8_MAX);
    fprintf(stdout, "uint_least16  %zu bytes  0..%" PRIuLEAST16 "\n", sizeof(uint_least16_t), UINT_LEAST16_MAX);
    fprintf(stdout, "uint_least32  %zu bytes  0..%" PRIuLEAST32 "\n", sizeof(uint_least32_t), UINT_LEAST32_MAX);
    fprintf(stdout, "uint_least64  %zu bytes  0..%" PRIuLEAST64 "\n", sizeof(uint_least64_t), UINT_LEAST64_MAX);
    fputs("\n\nLargest available signed type\n", stdout);
    fprintf(stdout, "intmax_t  %zu bytes %" PRIdMAX "..%" PRIdMAX "\n\n", sizeof(intmax_t), INTMAX_MIN, INTMAX_MAX);
    fputs("Largest available unsigned type\n", stdout);
    fprintf(stdout, "uintmax_t  %zu bytes 0..%" PRIuMAX "\n", sizeof(uintmax_t), UINTMAX_MAX);
    #ifdef INTPTR_WIDTH
        fputs("\n\nSigned integer type capable of holding a converted void*\n", stdout);
        fprintf(stdout, "intptr_t  %zu bytes\n", sizeof(intptr_t));
    #endif
    #ifdef UINTPTR_WIDTH
        fputs("\nUnsigned integer type capable of holding a converted void*\n", stdout);
        fprintf(stdout, "uintptr_t  %zu bytes\n", sizeof(uintptr_t));
    #endif

    return EXIT_SUCCESS;
}
