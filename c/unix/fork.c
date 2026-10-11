#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/unistd.h>
#include <sys/wait.h>

int main(void) {
    fprintf(stdout, "Iniciando programa...\n");
    pid_t pid = fork();
    if (pid == -1) {
        fprintf(stderr, "Não foi possível fazer fork do processo, errono %s\n", strerror(errno));
        return EXIT_FAILURE;
    }
    if (pid == 0) {
        fprintf(stdout, "Esse é o processo-filho, com PID 0\n");
    } else {
        fprintf(stdout, "Esse é o processo-pai, com PID %d\n", pid);
        int resultado;
        waitpid(-1, &resultado, 0);
        fprintf(stdout, "Processo pai terminou de esperar o filho mais velho...\n");
    }
    fprintf(stdout, "Finalizando programa...\n");
    return EXIT_SUCCESS;
}
