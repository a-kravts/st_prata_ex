/* Testing a function that reverses an array of double
   filename: Ch10Ex6.c
   ver 1.0
   Alexandr Kravtsov
*/

#include "reverse_array_of_double.h"
#include "print_of_array_double.h"

#define QUANTITY 5

int main()
{
	double array[QUANTITY] = {110.0, 90.3, 9.0, 6.1, 3.0};
	
	print_arr_double(array, array + QUANTITY);
	reverse_array_of_double(array, QUANTITY);
	print_arr_double(array, array + QUANTITY);
	
	return 0;
}
