#include "selection_sort.h"

void selection_sort(int *array, int size)
{
    int tmp, *current, *max, *current_max = array + size - 1;

    for(; current_max > array; current_max--) {
        max = current_max;
        for(current = array; current < current_max; current++) {
            if(*current > *max) {
                max = current;
            }
        }
        if(max != current_max) {
            tmp = *current_max;
            *current_max = *max;
            *max = tmp;
        }
    }
}
