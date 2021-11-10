#include "quick_sort.h"
#include "stdlib.h"

static int compare_int(const void *a, const void *b);

void quick_sort(int *array, int size)
{
    qsort(array, size, sizeof(int), compare_int);
}

static int compare_int(const void *a, const void *b)
{
    const int *pa = (const int *)a;
    const int *pb = (const int *)b;

    if(*pa > *pb) {
        return 1;
    } else if(*pa < *pb) {
        return -1;
    } else {
        return 0;
    }
}
