/* Input/output float-point number
   filename: Ch3Ex4.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	float number;
	int correct_enter;

	printf("Enter any float-point number: ");
	correct_enter = scanf("%f", &number);
	if(correct_enter != 1) {
		printf("Error enter. Exit...\n");
		return 1;
	}
	printf("the number in fixed-point format: %f\n"
		   "the number in exponential format: %e\n"
		   "the number in float-point format with base = 2: %a\n", number,
																   number,
																   number);

	return 0;
}
