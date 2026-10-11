/*
 * Function pointers
 */
#include <stdio.h>
#include <stdlib.h>

int int_func1(int n1, int n2, int n3, int n4, int n5) {
    if (n1 > 1000) {
        return (((n1 * 2) - 1) + n2 / 10) - 9;
    }
    if (n1 > 100) {
        return (n1 * n1 * n1) - 3 * n2 + 3;
    } 
    if (n1 > 10) {
        return - n1 - n2 + 9 * 9;
    }
    if (n1 == 7) {
        return -91 - n1;
    }
    return 8 + n2;
}

int int_func2(int n1, int n2, int n3, int n4, int n5) {
    return n1 + 9 - n2;
}

int int_func3(int n1, int n2, int n3, int n4, int n5) {
    return n1 * 4 - n2 / 2;
}

void void_func1(void) {
    printf("void function 1\n");
}

void void_func2(void) {
    printf("void function 2\n");
}

void void_func3(void) {
    printf("void function 3\n");
}

void execute(int (*pointers[])(int n1, int n2, int n3, int n4, int n5), int length) {
    for (int i = 0; i < length; i++) {
        printf("result of func[%d]: %d\n", i, pointers[i](9, 23, -2, 4, 8));
    }
}

int main(void) {
    void (* prt_void_f_1)(void) = void_func1;
    void (* prt_void_f_2)(void) = void_func2;
    void (* prt_void_f_3)(void) = void_func3;
    prt_void_f_1();
    prt_void_f_2();
    prt_void_f_3();

    int (* prt_int_f_1)(int n1, int n2, int n3, int n4, int n5) = int_func1;
    int (* prt_int_f_2)(int n1, int n2, int n3, int n4, int n5) = int_func2;
    int (* prt_int_f_3)(int n1, int n2, int n3, int n4, int n5) = int_func3;
    int (* int_pointers[])(int n1, int n2, int n3, int n4, int n5) = { prt_int_f_1, prt_int_f_2, int_func3 };

    execute(int_pointers, sizeof(int_pointers) / sizeof(int_pointers[0]));

    printf("prt_void_f_1 %d ; %p \n", sizeof(prt_void_f_1), prt_void_f_1);
    printf("prt_void_f_2 %d ; %p \n", sizeof(prt_void_f_2), prt_void_f_2);
    printf("prt_void_f_3 %d ; %p \n", sizeof(prt_void_f_3), prt_void_f_3);

    printf("prt_int_f_1 %d ; %p \n", sizeof(prt_int_f_1), prt_int_f_1);
    printf("prt_int_f_2 %d ; %p \n", sizeof(prt_int_f_2), prt_int_f_2);
    printf("prt_int_f_3 %d ; %p \n", sizeof(prt_int_f_3), prt_int_f_3);

    printf("void_func1 %d ; %p \n", sizeof(void_func1), void_func1);
    printf("void_func2 %d ; %p \n", sizeof(void_func2), void_func2);
    printf("void_func3 %d ; %p \n", sizeof(void_func3), void_func3);

    printf("int_func1 %d ; %p \n", sizeof(int_func1), int_func1);
    printf("int_func2 %d ; %p \n", sizeof(int_func2), int_func2);
    printf("int_func3 %d ; %p \n", sizeof(int_func3), int_func3);

    return EXIT_SUCCESS;
}
