#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv, char ** envp) {
    fprintf(stdout, "argc %d\n", argc);
    fprintf(stdout, "envp %p\n", envp);
    for (int i = 0; i < argc; i++) {
        fprintf(stdout, "    argv[%d]: %s \n", i, argv[i]);
    }
    int j = 0;
    while (1 == 1) {
        char * curr = envp[j];
        if (curr != NULL) {
            fprintf(stdout, "        envp[%d]: %s \n", j, curr);
            j++;
        } else {
            break;
        }
    }
    return EXIT_SUCCESS;
}
