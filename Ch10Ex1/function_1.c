/* Calculation and printing of annual and average annual precipitation */

#include <stdio.h>
#include "function_1.h"

void calculation_of_annual_precipitation(const float (*array)[12], int years,
										 int months)
{
	float subtot, total;
	const float (*limit_of_years)[months] = array + years;
	const float *current_month, *limit_of_months;
	int first_year = 2010;
	printf("year   precipitation(inches)\n");
	for(total = 0; array < limit_of_years; array++) {
		current_month = *array;
		limit_of_months = *array + months;
		for(subtot = 0; current_month < limit_of_months;
			current_month++)
			subtot += *current_month;
		printf("%4d   %12.1f\n", first_year++, subtot);
		total += subtot;
	}
	printf("Average annual precipitation over five years = %.1f inches.\n\n", 
		   total / years);
}
