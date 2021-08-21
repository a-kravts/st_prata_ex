/* Sorting integers in descending order */
#include "sort_int.h"

void sort_int(int *arr, int quantity)
{
	int top;
	int seek;
	int tmp;
	
	for(top = 0; top < quantity - 1; top++)
		 for(seek = top + 1; seek < quantity; seek++)
		 	if(arr[top] < arr[seek]) {
		 		tmp = arr[top];
		 		arr[top] = arr[seek];
		 		arr[seek] = tmp;
		 	}
}
