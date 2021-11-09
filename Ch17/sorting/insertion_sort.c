#include "insertion_sort.h"

void insertion_sort(int *array, int size)
{
    int tmp, *current, *tmp_current, *previous, *end = array + size;

    for(current = array + 1; current < end; current++) {
        previous = current - 1;
        if(*current < *previous) {
            tmp = *current;
            tmp_current = current;
            do {
                *tmp_current = *previous;
                previous--;
                tmp_current--;
            } while(previous >= array && tmp < *previous);
            *tmp_current = tmp;
        }
    }
}
