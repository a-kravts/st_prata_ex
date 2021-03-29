#include "return_index_max_double.h"

int index_max_double(const double *arr, const double *end)
{
	double max = *arr;
	int index = 0, max_index = 0;
	for(arr++; arr < end; arr++, index++)
		if(*arr > max) {
			max = *arr;
			max_index = index;
		}
	
	return max_index;
}










