#include "elementwise_sum_of_two_arrays_double.h"

void elementwise_sum_double(double *dest, const double *source_1,
							const double *source_2, int column)
{
	int c;
	for(c = 0; c < column; c++)
		dest[c] = source_1[c] + source_2[c];
}
