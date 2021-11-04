#include "get_running_time.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>

double get_running_time(fp_t function, const int *array, int size)
{
    clock_t start, finish;
    int tmp[size];

    memcpy(tmp, array, size * sizeof(int));
    start = clock();
    if(start == -1) {
        perror("clock");
        exit(EXIT_FAILURE);
    }
    function(tmp, size);
    finish = clock();
    if(finish == -1) {
        perror("clock");
        exit(EXIT_FAILURE);
    }
    return (double)(finish - start) / CLOCKS_PER_SEC;
}
