/* Copy 2d array of double
   filename: Ch10Ex7.c
   ver 1.0
   Alexandr Kravtsov
*/

#include "copy_array_with_ptr_to_end.h"
#include "print_of_array_double.h"

#define ROW 2
#define COLUMN 5

int main()
{
	double array[ROW][COLUMN] = {
		{0.0, 1.1, 2.2, 3.3, 4.4},
		{5.5, 6.6, 7.7, 8.8, 9.9}
	};
	double destination[ROW][COLUMN];
	
	print_arr_double(array[0], array[0] + COLUMN);
	print_arr_double(array[1], array[1] + COLUMN);
	copy_ptrs(destination[0], array[0], array[0] + COLUMN);
	copy_ptrs(destination[1], array[1], array[1] + COLUMN);
	print_arr_double(destination[0], destination[0] + COLUMN);
	print_arr_double(destination[1], destination[1] + COLUMN);
		
	return 0;
}
