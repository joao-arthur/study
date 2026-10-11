#include <stdalign.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct AlignedStruct {
    alignas(64) uint8_t field1;
    alignas(64) uint8_t field2;
};

typedef struct {
    char c;
    int i;
} TypedefStruct;

struct UnionStruct {
    union {
        char c;
        long l;
    };
};

struct NumberUnion {
    union {
        float f;
        int32_t i;
        uint32_t u;
    };
};

int main(void) {
    struct AlignedStruct aligned_struct;
    printf("An struct member field can have a custom alignment: %zub\n", sizeof(aligned_struct));

    TypedefStruct t_defined;
    printf("typedef operator works for data types and for structs. TypedefStruct size: %zub\n", sizeof(t_defined));

    struct UnionStruct union_struct;

    struct NumberUnion as_i = { .i = -1 };
    struct NumberUnion as_f = { .f = -1 };
    struct NumberUnion as_u = { .u = 3294967296 };

    printf("union operator allows to interpret the same memory in different ways. UnionStruct size: %zub\n", sizeof(union_struct));
    printf("UnionStruct as i { i: %i, f: %f, u: %u }\n", as_i.i, as_i.f, as_i.u);
    printf("UnionStruct as f { i: %i, f: %f, u: %u }\n", as_f.i, as_f.f, as_f.u);
    printf("UnionStruct as u { i: %i, f: %f, u: %u }\n", as_u.i, as_u.f, as_u.u);

    return EXIT_SUCCESS;
}
