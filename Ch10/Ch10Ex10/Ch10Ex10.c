/* Testing a function that sums two arrays of double numbers by elements
   filename: Ch10Ex10.c
   ver 1.0
   Alexandr Kravtsov
*/

#include "elementwise_sum_of_two_arrays_double.h"
#include "print_of_array_double.h"

#define COLUMN 4

int main()
{
	double array_1[COLUMN] = {2.0, 4.0, 5.0, 8.0};
	double array_2[COLUMN] = {1.0, 0.0, 4.0, 6.0}; 
	double dest[COLUMN];
	
	elementwise_sum_double(dest, array_1, array_2, COLUMN);
	print_arr_double(array_1, array_1 + COLUMN);
	print_arr_double(array_2, array_2 + COLUMN);
	print_arr_double(dest, dest + COLUMN);
		
	return 0;
}
