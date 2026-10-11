#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct Struct8 {
    uint8_t num8;
};

struct Struct16 {
    uint16_t num16;
};

struct Struct32 {
    uint32_t num32;
};

struct Struct64 {
    uint64_t num64;
};

struct Struct16_8 {
    uint16_t num16;
    uint8_t num8;
};

struct Struct32_8 {
    uint32_t num32;
    uint8_t num8;
};

struct Struct64_8 {
    uint64_t num64;
    uint8_t num8;
};

struct Struct8_16 {
    uint8_t num8;
    uint16_t num16;
};

struct Struct8_32 {
    uint8_t num8;
    uint32_t num32;
};

struct Struct8_64 {
    uint8_t num8;
    uint64_t num64;
};

int main(void) {
    constexpr size_t int8_size = sizeof(int8_t);
    constexpr size_t int16_size = sizeof(int16_t);
    constexpr size_t int32_size = sizeof(int32_t);
    constexpr size_t int64_size = sizeof(int64_t);
    fputs("A field address is a multiple of its alignment\n", stdout);
    fprintf(stdout, "uint8_t:  size %zu, alignment %zu\n", int8_size, alignof(uint8_t));
    fprintf(stdout, "uint16_t: size %zu, alignment %zu\n", int16_size, alignof(uint16_t));
    fprintf(stdout, "uint32_t: size %zu, alignment %zu\n", int32_size, alignof(uint32_t));
    fprintf(stdout, "uint64_t: size %zu, alignment %zu\n\n", int64_size, alignof(uint64_t));
    fputs("Struct size corresponds to the sum of the sizes of its fields\n", stdout);
    fprintf(stdout, "%zu = %zu\n", int8_size, sizeof(struct Struct8));
    fprintf(stdout, "%zu = %zu\n", int16_size, sizeof(struct Struct16));
    fprintf(stdout, "%zu = %zu\n", int32_size, sizeof(struct Struct32));
    fprintf(stdout, "%zu = %zu\n", int64_size, sizeof(struct Struct64));
    fputs("\nTail padding: The struct size is a multiple of its largest field alignment\n", stdout);
    fprintf(stdout, "%zu+%zu = %zu\n", int16_size, int8_size, sizeof(struct Struct16_8));
    fprintf(stdout, "%zu+%zu = %zu\n", int32_size, int8_size, sizeof(struct Struct32_8));
    fprintf(stdout, "%zu+%zu = %zu\n", int64_size, int8_size, sizeof(struct Struct64_8));
    fputs("\nMember padding: A field only occupies a memory address multiple of its alignment size\n", stdout);
    fprintf(stdout, "%zu+%zu = %zu\n", int8_size, int16_size, sizeof(struct Struct8_16));
    fprintf(stdout, "%zu+%zu = %zu\n", int8_size, int32_size, sizeof(struct Struct8_32));
    fprintf(stdout, "%zu+%zu = %zu\n", int8_size, int64_size, sizeof(struct Struct8_64));

    return EXIT_SUCCESS;
}
