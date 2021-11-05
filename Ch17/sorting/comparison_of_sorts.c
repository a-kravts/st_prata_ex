/* Comparison of sorts
   filename: comparison_of_sorts.c
   ver 1.0
   Aleksandr Kravtsov */
#include "bubble_sort.h"
#include "selection_sort.h"
//#include "insertion_sort.h"
//#include "quick_sort.h"
#include "get_running_time.h"
#include <stdio.h>

int main(void)
{
    double bubble_sort_time, selection_sort_time, insertion_sort_time,
           quick_sort_time;
    int array[] = {9, 2, 4, 1, 5, 3, 8, 6, 0, 7};
    int size = sizeof(array) / sizeof(*array);

    bubble_sort_time = get_running_time(bubble_sort, array, size);
    selection_sort_time = get_running_time(selection_sort, array, size);
//    insertion_sort_time = get_running_time(insertion_sort, array, size);
//    quick_sort_time = get_running_time(quick_sort, array, size);
    printf("bubble sort time    = %.9lf sec.\n", bubble_sort_time);
    printf("selection sort time = %.9lf sec.\n", selection_sort_time);
//    printf("insertion sort time = %.9lf sec.\n", insertion_sort_time);
//    printf("quick sort time     = %.9lf sec.\n", quick_sort_time);

    return 0;
}
