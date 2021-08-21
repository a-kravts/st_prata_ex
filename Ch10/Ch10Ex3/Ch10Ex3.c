/* Testing a function that returns the maximum integer
   filename: Ch10Ex3.c
   ver 1.0
   Alexandr Kravtsov */

#include "max_int_from_array.h"
#include "print_of_array.h"
#include <stdio.h>

#define QUANTITY 5

int main()
{
	int array[QUANTITY] = {100, 93, 90, 11, 999};
	
	print_arr(array, array + QUANTITY);
	printf("Maximum integer = %d\n.", max_int(array, array + QUANTITY)); 
	
	return 0;
}
