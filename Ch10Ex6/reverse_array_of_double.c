#include "reverse_array_of_double.h"

void reverse_array_of_double(double *arr, int quantity)
{
	double tmp;
	int i;
	for(i = 0; i <= (quantity / 2); i++) {
		tmp = arr[i];
		arr[i] = arr[quantity - i - 1];
		arr[quantity - i - 1] = tmp;
	}
}
