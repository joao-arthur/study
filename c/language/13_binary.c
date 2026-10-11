#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
//#include <string.h>

struct Signal {
    uint8_t num;
    char name[6];
    //char desc[100];
};

int main(void) {
    FILE * signals_f = fopen("./signals_f.bin", "wb");
    if (signals_f == NULL) {
        fputs("Cannot open \"./signals_f.bin\" file!\n", stderr);
        return EXIT_FAILURE;
    }

    FILE * nums_f = fopen("./nums_f.bin", "wb");
    if (nums_f == NULL) {
        fputs("Cannot open \"./nums_f.bin\" file!\n", stderr);
        return EXIT_FAILURE;
    }

    struct Signal signals[5] = {
        { .num = 1, .name = "SIGHUP" },
        { .num = 2, .name = "SIGINT" },
        { .num = 3, .name = "SIGQUI" },
        { .num = 4, .name = "SIGILL" },
        { .num = 5, .name = "SIGTRA" }
    };
    size_t signals_size = sizeof(struct Signal) * 5;
    size_t signals_write_result = fwrite(&signals, signals_size, 1, signals_f);
    if (signals_write_result != 1) {
        fputs("Cannot write the results to \"./signals_f.bin\" file!\n", stderr);
        return EXIT_FAILURE;
    }
    int signals_f_close_result = fclose(signals_f);
    if (signals_f_close_result == EOF) {
        fputs("Cannot close the \"./signals_f.bin\" file!\n", stderr);
        return EXIT_FAILURE;
    }

    uint32_t nums[41] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    size_t nums_size = sizeof(uint32_t) * 41;
    size_t nums_write_result = fwrite(&nums, nums_size, 1, nums_f);
    if (nums_write_result != 1) {
        fputs("Cannot write the results to \"./nums_f.bin\" file!\n", stderr);
        return EXIT_FAILURE;
    }
    int nums_f_close_result = fclose(nums_f);
    if (nums_f_close_result == EOF) {
        fputs("Cannot close the \"./nums_f.bin\" file!\n", stderr);
        return EXIT_FAILURE;
    }



    return EXIT_SUCCESS;
}
