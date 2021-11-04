#include "bubble_sort.h"

void bubble_sort(int *array, int size)
{
    enum state {false, true} swap;
    int tmp, i, limit;

    while(size > 1) {
        swap = false;
        limit = size - 1;
        for(i = 0; i < limit; i++) {
            if(array[i] > array[i + 1]) {
                tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
                if(!swap) {
                    swap = true;
                }
            }
        }
        if(!swap) {
            break;
        }
        size--;
    }
}
