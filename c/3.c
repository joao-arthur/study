/*
 * pointer addresses and alignment example
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    int8_t i8 = 1;
    int16_t i16 = 1;
    int32_t i32 = 1;
    int64_t i64 = 1;
    char chars[11];
    for (int i = 0; i < 5; i++) {
        *(chars + i) = '0' + i;
    }
    for (int i = 5; i < 10; i++) {
        chars[i] = 48 + i;
    }
    chars[10] = '\0';

    uintptr_t addr_i8 = (uintptr_t)&i8;

    printf("i8   = 0x0\n");
    printf("i16  = %p\n", (uintptr_t)&i16 - addr_i8);
    printf("i32  = %p\n", (uintptr_t)&i32 - addr_i8);
    printf("i64  = %p\n", (uintptr_t)&i64 - addr_i8);
    for (int i = 0; i < 10; i++) {
        printf("c[%d] = %p\n", i, chars + i - addr_i8);
    }

    return EXIT_SUCCESS;
}

