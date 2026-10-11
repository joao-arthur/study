#include <stdio.h>
#include <stdlib.h>
#include <threads.h>

int global_value = 0;

int worker(void *_) {
    for (int i = 0; i < 1000; i++) {
        global_value += 1;
    }
    return EXIT_SUCCESS;
}

int main(void) {
    int numThreads = 1000;
    thrd_t threads[numThreads];
    for (int i = 0; i < numThreads; i++) {
        if (thrd_create(&threads[i], worker, NULL) != thrd_success) {
            fprintf(stderr, "Failed to create thread %d\n", i);
            return EXIT_FAILURE;
        }
    }
    for (int i = 0; i < numThreads; i++) {
        int res;
        thrd_join(threads[i], &res);
    }
    printf("Final global counter: %d\n", global_value);
    return EXIT_SUCCESS;
}
