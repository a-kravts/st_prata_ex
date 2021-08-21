#include "print_2d_array_double.h"
#include <stdio.h>

void print_2d_arr_double(const double (*arr)[5], int row, int column)
{	
	int r, c;
	for(r = 0; r < row; r++)
		for(c = 0; c < column; c++)
			printf(" %.2lf", arr[r][c]);
	printf("\n");
}
