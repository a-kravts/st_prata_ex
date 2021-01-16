/* Сomparison of deposits with simple and compound interest
   filename: Ch6Ex16.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

#define start_up_capital 100L			/* in dollars */
#define simple_percents 0.1							
#define compound_percents 0.05			

int main()
{
	double simple_interest_dep;
	double compound_interest_dep;
	int number_of_years;
	
	simple_interest_dep = start_up_capital;
	compound_interest_dep = start_up_capital;
	number_of_years = 0;
	while(simple_interest_dep >= compound_interest_dep) {
		simple_interest_dep += start_up_capital * simple_percents;
		compound_interest_dep += compound_interest_dep * compound_percents;
		number_of_years++;
	}
	printf("After %d year(s)\n"
		   "Simple interest deposit   = $%.2lf\n"
		   "Compound interest deposit = $%.2lf\n", number_of_years,
												   simple_interest_dep,
												   compound_interest_dep);
	
	return 0;
}
