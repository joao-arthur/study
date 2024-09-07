/*
 * Evil code
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // change a const value by accessing it as a pointer
    const int i = 1;
    printf("i before = %i\n", i);
    int *pi = (int *)&i;
    *pi = 9;
    printf("i after = %i\n", i);

    return EXIT_SUCCESS;
}
