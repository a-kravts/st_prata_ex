/* Testing of function that copy 2d array of double
   filename: Ch10Ex9.c
   ver 1.0
   Alexandr Kravtsov
*/

#include "copy_2d_array_double.h"
#include "print_2d_array_double.h"

#define ROW 2
#define COLUMN 5

int main()
{
	double array[ROW][COLUMN] = {
		{0.0, 1.1, 2.2, 3.3, 4.4},
		{5.5, 6.6, 7.7, 8.8, 9.9}
	};
	double dest[ROW][COLUMN];
	
	print_2d_arr_double(array, ROW, COLUMN);
	copy_2d_arr_double(dest, array, ROW, COLUMN);
	print_2d_arr_double(dest, ROW, COLUMN);
		
	return 0;
}
