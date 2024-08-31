#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdalign.h>

struct Simple {
    char c;
    _Alignas(4) short s;
};

int main(void) {
    struct Simple default_aligned;
    _Alignas(32) struct Simple custom_aligned;

    printf("Size of default aligned: %zub\n", sizeof(default_aligned));
    printf("Size of custom aligned: %zub\n", sizeof(custom_aligned));

    return EXIT_SUCCESS;
}
