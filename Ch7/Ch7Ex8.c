/* Calculation of wages, tax for hours worked per week with a choice of rate
   filename: Ch7Ex8.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

#define WORKING_HOURS_PER_WEEK 40
#define OVERTIME_WAGE_RATE 1.5				/* exceeding 40 hours per week */
#define TAX1 0.15							/* from 0 up to 300 dollars */
#define TAX2 0.20							/* from 300 up to 450 dollars */
#define TAX3 0.25							/* from the remainder dollars */
#define BREAK1 300.0
#define BREAK2 450.0
#define BASE1 (BREAK1 * TAX1)						/* tax from 300 dollars */
#define BASE2 (BASE1 + ((BREAK2 - BREAK1) * TAX2))	/* tax from 450 dollars */

#define RATE1 8.75							/* dollars per hour */
#define RATE2 9.33							/* dollars per hour */
#define RATE3 10.00							/* dollars per hour */
#define RATE4 11.20							/* dollars per hour */

void rate_selection_menu();

int main()
{
	char choice;
	double wage_rate;
	int hours_worked;
	double gross_wage, net_wage;
	double tax;

	rate_selection_menu();
	while(scanf(" %c", &choice), choice != '5') {
		if(choice < '1' || choice > '5') {
			printf("Invalid value!\n");
			rate_selection_menu();
			continue;
		}
		else {
			switch(choice) {
				case '1':
					wage_rate = RATE1;
					break;
				case '2':
					wage_rate = RATE2;
					break; 
				case '3':
					wage_rate = RATE3;
					break;
				case '4':
					wage_rate = RATE4;
					break;
			}
			printf("Enter hours worked per week: ");
			if(scanf("%d", &hours_worked) == 1) {
				if(hours_worked <= WORKING_HOURS_PER_WEEK)
					gross_wage = hours_worked * wage_rate;
				else
					gross_wage = WORKING_HOURS_PER_WEEK * wage_rate + 	  
								 (wage_rate * OVERTIME_WAGE_RATE * 
								 (hours_worked - WORKING_HOURS_PER_WEEK));
				
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
				printf("\nYour choice(1-5): ");
			}
			else {
				printf("\nError enter.Exit.\n");
				return 1;
			}
		}
	}
	printf("\nExit.\n");
	return 0;
}	

void rate_selection_menu()
{
	int i;
	int number_of_chars = 80;
	
	for(i = 0; i < number_of_chars; i++)
		putchar('*');
	printf("\nEnter the number corresponding "
		   "to the desired rate or action:\n");
	printf("1) $8.75/h      2) $9.33/h\n");
	printf("3) $10.00/h     4) $11.20/h\n");
	printf("5) Exit\n");
	for(i = 0; i < number_of_chars; i++)
		putchar('*');
	printf("\nYour choice: ");
}
