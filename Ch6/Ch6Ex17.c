/* Сalculation of the life of capital
   filename: Ch6Ex17.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

#define START_UP_CAPITAL 1000000L				/* in dollars */
#define SIMPLE_PERCENTS 0.08	
#define ANNUAL_CAPITAL_EXPENDITURE 100000L		/* in dollars */
int main()
{
	double simple_interest_dep;
	int number_of_years;
	
	simple_interest_dep = START_UP_CAPITAL;
	number_of_years = 0;
	while(simple_interest_dep >= 0) {
		simple_interest_dep += START_UP_CAPITAL * SIMPLE_PERCENTS;
		simple_interest_dep -= ANNUAL_CAPITAL_EXPENDITURE;
		number_of_years++;
	}
	printf("Сapital will be enough for %d year(s)\n"
		   "Balance on the deposit = $%.2lf\n", --number_of_years,
			simple_interest_dep + ANNUAL_CAPITAL_EXPENDITURE);
	
	return 0;
}
