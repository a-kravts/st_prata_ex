#include "print_of_array.h"
#include <stdio.h>

void print_arr(const int *arr, const int *end)
{
    for(; arr < end; arr++)
        printf(" %d", *arr);
    printf("\n");
}
