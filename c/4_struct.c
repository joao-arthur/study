/*
 * Struct size, alignment and union
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdalign.h>

struct TagStruct {
    char c;
    short s;
};

struct AlignedStruct {
    char c;
    alignas(32) short s;
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
        int i;
        uint u;
    };
};

int main(void) {
    struct TagStruct default_aligned;
    struct AlignedStruct custom_aligned;
    TypedefStruct t_default_aligned;
    struct UnionStruct union_struct;

    struct NumberUnion as_i = { .i = -1 };
    struct NumberUnion as_f = { .f = -1 };
    struct NumberUnion as_u = { .u = 2147483648 };

    printf("Size of default_aligned: %zub\n", sizeof(default_aligned));
    printf("Size of custom_aligned: %zub\n", sizeof(custom_aligned));
    printf("Size of t_default_aligned: %zub\n", sizeof(t_default_aligned));
    printf("Size of union_struct: %zub\n", sizeof(union_struct));
    printf("-=-=-=-=-=-=-=-\n");
    printf("as_i { i: %i, f: %f, u: %u }\n", as_i.i, as_i.f, as_i.u);
    printf("as_f { i: %i, f: %f, u: %u }\n", as_f.i, as_f.f, as_f.u);
    printf("as_u { i: %i, f: %f, u: %u }\n", as_u.i, as_u.f, as_u.u);


    return EXIT_SUCCESS;
}
