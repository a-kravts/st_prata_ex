/* Testing a function that returns the index of maximum double
   filename: Ch10Ex4.c
   ver 1.0
   Alexandr Kravtsov */

#include "return_index_max_double.h"
#include "print_of_array_double.h"
#include <stdio.h>

#define QUANTITY 5

int main()
{
	double array[QUANTITY] = {110.0, 9.3, 9.0, 1.1, 99.9};
	
	print_arr_double(array, array + QUANTITY);
	printf("The index of maximum double = %d\n.",
			index_max_double(array, array + QUANTITY)); 
	
	return 0;
}
