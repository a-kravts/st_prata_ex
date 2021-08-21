#include "make_array_int.h"
#include <stdlib.h>
#include <stdio.h>

int *make_array_int(int quantity, int value)
{
	int *p_arr;
	int i;

	p_arr = (int *)malloc(quantity * sizeof(int));
	if(p_arr == NULL) {
		printf("Error: not enough memory for the number of items!\n");
		exit(EXIT_FAILURE);
	}
	for(i = 0; i < quantity; i++)
		p_arr[i] = value;

	return p_arr;
}
