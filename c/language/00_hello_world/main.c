#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int result = fputs("Hello, World!\n", stdout);
    if (result == EOF) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
