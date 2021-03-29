#include "print_of_array_double.h"
#include <stdio.h>

void print_arr_double(const double *arr, const double *end)
{
    for(; arr < end; arr++)
        printf(" %.2lf", *arr);
    printf("\n");
}
