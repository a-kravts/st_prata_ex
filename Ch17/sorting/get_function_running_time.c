#include "get_function_running_time.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>

double
get_function_running_time(void function(int *array), int *array, int size)
{
    clock_t start, finish;

    start = clock();
    if(start == -1) {
        perror("clock");
        exit(EXIT_FAILURE);
    }
    function(array);
    finish = clock();
    if(finish == -1) {
        perror("clock");
        exit(EXIT_FAILURE);
    }
    return (double)(finish - start) / CLOCKS_PER_SEC;
}
