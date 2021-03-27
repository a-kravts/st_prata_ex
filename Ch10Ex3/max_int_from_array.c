#include "max_int_from_array.h"

int max_int(const int *arr, const int *end)
{
	int max = 0;
	for(; arr < end; arr++)
		if(*arr > max)
			max = *arr;
	
	return max;
}
