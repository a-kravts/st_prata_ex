/* Calculation and printing of average months precipitation */

#include <stdio.h>
#include "function_2.h"

void calculation_of_average_months_precipitation(const float (*array)[12],
												 int years, int months)
{
	float subtot;
	const float (*limit_of_years)[months] = array + years;
	const float (*current_year)[months];
	int i;
	printf("Average monthly precipitation(inches):\n");
	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	for(i = 0; i < months; i++) {
		current_year = array;
		for(subtot = 0; current_year < limit_of_years; current_year++)
			subtot += *(*current_year + i);
		printf("%4.1f ", subtot / years);
	}
	printf("\n");
}
