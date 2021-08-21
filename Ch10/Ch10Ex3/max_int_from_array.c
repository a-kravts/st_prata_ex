#include "max_int_from_array.h"

int max_int(const int *arr, const int *end)
{
	int max = *arr;
	for(arr++; arr < end; arr++)
		if(*arr > max)
			max = *arr;
	
	return max;
}
