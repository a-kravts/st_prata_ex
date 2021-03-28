#include "return_difference_between_max_and_min_double.h"

double diff_between_max_and_min_double(const double *arr, const double *end)
{
	double max = *arr, min = *arr;
	
	for(arr++; arr < end; arr++) {
		if(*arr > max)
			max = *arr;
		else if(*arr < min)
			min = *arr;
	}
	
	return max - min;
}










