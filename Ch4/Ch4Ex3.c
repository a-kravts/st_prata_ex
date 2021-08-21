/* Input/output of float-point number
   filename: Ch4Ex3.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	double number;
	int correct_enter;

	printf("Enter any float-point number:\n");
	correct_enter = scanf("%lf", &number);
	if(correct_enter != 1) {
		printf("Error enter. Exit...\n");
		return 1;
	}
	printf("%10.1lf %10.1le\n"
		   "%+10.3lf %10.3lE\n", number, number, number, number);
	
	return 0;
}
