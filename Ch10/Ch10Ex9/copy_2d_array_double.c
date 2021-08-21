#include "print_2d_array_double.h"

void copy_2d_arr_double(double (*dest)[5], const double (*source)[5],
						  int row, int column)
{
	int r, c;
	for(r = 0; r < row; r++)
		for(c = 0; c < column; c++)
			dest[r][c] = source[r][c];
}
