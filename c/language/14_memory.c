#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct Nums {
  uint8_t num8;
  uint16_t num16;
  uint32_t num32;
};

static size_t SIZE = 8;

int main(void) {
    void *mem = malloc(SIZE);
    fprintf(stdout, "Sizeof allocated memory = %lu\n", sizeof(mem));
    fprintf(stdout, "Sizeof Nums = %lu\n", sizeof(struct Nums));
    struct Nums * as_struct = mem;
    as_struct->num8 = 10;
    as_struct->num16 = 10;
    as_struct->num32 = 10;
    fprintf(
        stdout,
        "Nums { u8: %u, u16: %u, u32: %u }\n",
        as_struct->num8,
        as_struct->num16,
        as_struct->num32
    );
    fprintf(stdout, "Sizeof uint64_t = %lu\n", sizeof(uint64_t));
    uint64_t *as_u64 = mem;
    fprintf(stdout, "uint64 = %u\n", *as_u64);
    free(mem);
    return EXIT_SUCCESS;
}
