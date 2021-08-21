/* Function replaces the contents of two variables with the larger of their
   filename: Ch9Ex5.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

void larger_of(double *a, double *b);

int main()
{
	double first_number, second_number; 
	int correct_enter;
	
	printf("Enter two float-point numbers:\n"),
	correct_enter = scanf("%lf%lf", &first_number, &second_number); 
	if(correct_enter != 2) {
		printf("Error enter!\nExit\n");
		return 1;
	}
	larger_of(&first_number, &second_number);
	printf("First number = %lf\n"
		   "Second number = %lf\n", first_number, second_number);
	
	return 0;
}	

void larger_of(double *a, double *b)
{
	if(*a > *b)
		*b = *a;
	else
		*a = *b;
}
