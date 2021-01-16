/* Сomparison of deposits with simple and compound interest
   filename: Ch6Ex16.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

#define START_UP_CAPITAL 100L			/* in dollars */
#define SIMPLE_PERCENTS 0.1							
#define COMPOUND_PERCENTS 0.05			

int main()
{
	double simple_interest_dep;
	double compound_interest_dep;
	int number_of_years;
	
	simple_interest_dep = START_UP_CAPITAL;
	compound_interest_dep = START_UP_CAPITAL;
	number_of_years = 0;
	while(simple_interest_dep >= compound_interest_dep) {
		simple_interest_dep += START_UP_CAPITAL * SIMPLE_PERCENTS;
		compound_interest_dep += compound_interest_dep * COMPOUND_PERCENTS;
		number_of_years++;
	}
	printf("After %d year(s)\n"
		   "Simple interest deposit   = $%.2lf\n"
		   "Compound interest deposit = $%.2lf\n", number_of_years,
												   simple_interest_dep,
												   compound_interest_dep);
	
	return 0;
}
