/*Printing a sorted integer array*/

#include "sort_array.h"
#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
    int arr_size = argc - 2;
    int arr[arr_size], i, ascending;
    if(argc < 4) {
        printf("Error: incorrect arguments\n");
        return 1;
    }
    ascending = strtoimax(argv[1], NULL, 10);
    for(i = 0; i < arr_size; i++)
        arr[i] = strtoimax(argv[i + 2], NULL, 10);

    if(ascending)
        SORT_ARRAY(arr, int, arr_size, <); /*in ascending order*/
    else
        SORT_ARRAY(arr, int, arr_size, >); /*in descending order*/

    for(i = 0; i < arr_size; i++)
        printf("%d%c", arr[i], ((i + 1) < arr_size)? ' ' : '\n' );

    return 0;
}
