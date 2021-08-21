/* conversion of temperatures
   filename: Ch5Ex9.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

const double const_celsius_1 = 5.0/9.0; /* to convert to degrees Сelsius*/
const double const_celsius_2 = 32.0;    /* to convert to degrees Сelsius*/
const double const_kelvin_1 = 273.16;   /* to convert to degrees Kelvin */

void temperatures(double f);

int main()
{
	int correct_enter;
	double temp_in_fahr;
	
	printf("Enter temperature in Fahrenheit(not a number to exit): ");
	correct_enter = scanf("%lf", &temp_in_fahr);
	while(correct_enter == 1) {
		temperatures(temp_in_fahr);
		printf("\nEnter temperature in Fahrenheit(not a number to exit): ");
		correct_enter = scanf("%lf", &temp_in_fahr);
	}	
	printf("Exit...\n");
	
	return 0;
}

void temperatures(double temp_in_fahr)
{
	double temp_in_cels = const_celsius_1 * (temp_in_fahr - const_celsius_2);
	double temp_in_kelv = temp_in_cels + const_kelvin_1;
	printf("Temperature in Fahrenheit: %5.2lf F\n"
		   "Temperature in Сelsius:    %5.2lf C\n"
		   "Temperature in Kelvin:     %5.2lf K\n", temp_in_fahr,
													temp_in_cels,
													temp_in_kelv);
}
