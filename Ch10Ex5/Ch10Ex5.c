/* Testing a function that returns the difference between the maximum and
   minimum double
   filename: Ch10Ex5.c
   ver 1.0
   Alexandr Kravtsov
*/

#include "return_difference_between_max_and_min_double.h"
#include "print_of_array_double.h"
#include <stdio.h>

#define QUANTITY 5

int main()
{
	double array[QUANTITY] = {110.0, 9.3, 9.0, 12.1, 90.0};
	
	print_arr_double(array, array + QUANTITY);
	printf("The difference between the maximum and\n"
		   "minimum double = %.2lf\n.",
			diff_between_max_and_min_double(array, array + QUANTITY)); 
	
	return 0;
}
