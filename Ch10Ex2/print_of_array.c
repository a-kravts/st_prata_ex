#include "print_of_array.h"
#include <stdio.h>

void print_arr(const double *arr, const double *end)
{
    for(; arr < end; arr++)
        printf("%4.1lf", *arr);
    printf("\n");
}
