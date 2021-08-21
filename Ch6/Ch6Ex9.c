/* output the difference of two numbers divided by their product
   filename: Ch6Ex9.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

double ratio_difference_to_product(double num1, double num2);

int main()
{
	double first_number, second_number, resulting_number;
	
	while(printf("Enter two float-point numbers(not a number to exit):\n"),
		  scanf("%lf %lf", &first_number, &second_number) == 2) {
		resulting_number = ratio_difference_to_product(first_number,
													   second_number);
		printf("(%g - %g)/(%g * %g) = %g\n", first_number,
											 second_number,
											 first_number,
											 second_number,
											 resulting_number);
	}
	return 0;
}

double ratio_difference_to_product(double num1, double num2)
{
	return (num1 - num2)/(num1 * num2);
}
