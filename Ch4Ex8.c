/* converting miles per gallon to liters per hundred kilometers
   filename: Ch4Ex8.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#define mpg_to_kpl 1.609/3.785
#define hundred_km 100

int main()
{
	double miles;
	double gallons;
	double mileage;
	double consumption;
	int correct_enter;

	printf("Enter miles and gallons:\n");
	correct_enter = scanf("%lf %lf", &miles, &gallons);
	if(correct_enter != 2) {
		printf("Error enter. Exit...\n");
		return 1;
	}
	mileage = miles/gallons;
	consumption = hundred_km/(mileage * mpg_to_kpl);
	printf("Your mileage = %.1lf miles per gallon\n"
		   "Your consumption = %.1lf liters on 100 km\n", mileage, consumption);
	
	return 0;
}
