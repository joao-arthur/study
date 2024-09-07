/*
 * Int representation
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

void int_to_bool_array(int8_t num, bool bits[8]) {
    for (int i = 0; i < 8; i++) {
        bits[i] = (num & (1 << (7 - i))) != 0;
    }
}

int8_t bool_array_to_int(bool bits[8]) {
    int8_t num = 0;
    for (int i = 0; i < 8; i++) {
        num |= (bits[i] << (7 - i));
    }
    return num;
}

int main(void) {
    int8_t i8 = 120;
    bool bits1[8];
    bool bits2[8];
    bool bits3[8];

    for (uint i = 0; i < 20; i++) {
        i8 += 1;
        int_to_bool_array(i8, bits1);
        int_to_bool_array(~i8, bits2);
        int_to_bool_array(-i8, bits3);
        printf(
            "%d = %d%d%d%d %d%d%d%d    ~ %d = %d%d%d%d %d%d%d%d    - %d = %d%d%d%d %d%d%d%d\n",
            i8,
            bits1[0], bits1[1], bits1[2], bits1[3], bits1[4], bits1[5], bits1[6], bits1[7],
            ~i8,
            bits2[0], bits2[1], bits2[2], bits2[3], bits2[4], bits2[5], bits2[6], bits2[7],
            -i8,
            bits3[0], bits3[1], bits3[2], bits3[3], bits3[4], bits3[5], bits3[6], bits3[7]
        );
    }

    return 0;
}