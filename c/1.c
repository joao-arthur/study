#include <stdio.h>
#include <stdlib.h>

int main(void) {
    if (printf("Hello, world!\n") == EOF) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
