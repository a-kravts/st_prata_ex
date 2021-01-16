/* Creating an array of numbers and display their values with a cumulative total 
   filename: Ch6Ex14.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

#define LIMIT 8

int main()
{
	double input_array[LIMIT];
	double cumulative_total[LIMIT];
	int correct_enter;
	int i;							/* index for loops */
	
	printf("Enter %d numbers:\n", LIMIT);
	for(i = 0; i < LIMIT; i++) {
		correct_enter = scanf("%lf", &input_array[i]);
		if(correct_enter != 1) {
			printf("Error enter. Exit...\n");
			return 1;
		}
	}
	for(i = 0; i < LIMIT; i++) {
		if(i == 0)
			cumulative_total[i] = input_array[i];
		else
			cumulative_total[i] = input_array[i] + cumulative_total[i - 1];
	}
	printf("\n");
	for(i = 0; i < LIMIT; i++)
		printf(" %-6.2lf ", input_array[i]);
	printf("\n");
	for(i = 0; i < LIMIT; i++)
		printf(" %-6.2lf ", cumulative_total[i]);
	printf("\n");
	
	return 0;
}
