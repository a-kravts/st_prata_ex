/* Calculation of precipitation by years,
   average annual and average monthly precipitation
   filename: Ch10Ex1.c
   ver 1.0
   Alexandr Kravtsov */

#include "function_1.h"
#include "function_2.h"

#define YEARS 5
#define MONTHS 12

int main()
{
	/* data from 2010 to 2014 years */
	const float rain[YEARS][MONTHS] = {
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
	};
	calculation_of_annual_precipitation(rain, YEARS, MONTHS);
	calculation_of_average_months_precipitation(rain, YEARS, MONTHS);

	return 0;
}
