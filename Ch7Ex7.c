/* Calculation of gross and net wages, tax for hours worked per week
   filename: Ch7Ex7.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

#define WAGE_RATE 10.0						/* dollars per hour */
#define WORKING_HOURS_PER_WEEK 40
#define OVERTIME_WAGE_RATE 1.5				/* exceeding 40 hours per week */
#define TAX1 0.15							/* from 0 up to 300 dollars */
#define TAX2 0.20							/* from 300 up to 450 dollars */
#define TAX3 0.25							/* from the remainder dollars */
#define BREAK1 300.0
#define BREAK2 450.0
#define BASE1 (BREAK1 * TAX1)						/* tax from 300 dollars */
#define BASE2 (BASE1 + ((BREAK2 - BREAK1) * TAX2))	/* tax from 450 dollars */

int main()
{
	int hours_worked;
	double gross_wage, net_wage;
	double tax;
	
	printf("Enter hours worked per week(not a number to exit):\n");
	if(scanf("%d", &hours_worked) == 1) {
		if(hours_worked <= WORKING_HOURS_PER_WEEK)
			gross_wage = hours_worked * WAGE_RATE;
		else 
			gross_wage = WORKING_HOURS_PER_WEEK * WAGE_RATE + 
						 (WAGE_RATE * OVERTIME_WAGE_RATE * 
						 (hours_worked - WORKING_HOURS_PER_WEEK));  /* ? */
		
		if(gross_wage <= BREAK1)
			tax = gross_wage * TAX1;
		else if(gross_wage <= BREAK2)
			tax = BASE1 + ((gross_wage - BREAK1) * TAX2);
		else
			tax = BASE2 + ((gross_wage - BREAK2) * TAX3);
		
		net_wage = gross_wage - tax;
		
		printf("Gross wage = %.2lf\n"
			   "Tax = %.2lf\n"
			   "Net wage = %.2lf\n", gross_wage, tax, net_wage);
	}
	else
		printf("\nExit.\n");
	
	return 0;
}
