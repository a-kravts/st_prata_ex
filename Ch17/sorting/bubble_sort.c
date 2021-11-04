#include "bubble_sort.h"

void bubble_sort(int *array, int size)
{
    enum state {false, true} swap;
    int tmp, *current, *next, *limit;
    limit = array + size - 1;

    for(; limit > array; limit--) {
        swap = false;
        for(current = array; current < limit; current++) {
            next = current + 1;
            if(*current > *next) {
                tmp = *current;
                *current = *next;
                *next = tmp;
                if(!swap) {
                    swap = true;
                }
            }
        }
        if(!swap) {
            break;
        }
    }
}
