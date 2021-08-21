/* translation of volume units 
   filename: Ch3Ex8.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	double cup;
	double correct_enter;
	double pint;
	double ounce;			/* унция */
	double tablespoon;			
	double teaspoon;	

	printf("Enter the volume in the number of cups: ");
	correct_enter = scanf("%lf", &cup);
	if(correct_enter != 1) {
		printf("Error enter. Exit...\n");
		return 1;
	}
	pint = cup / 2;
	ounce = cup * 8;
	tablespoon = ounce * 2;
	teaspoon = tablespoon * 3;	

	printf("%lf cup(s) are equivalent:\n"
		   " - %lf pint(s)\n"
		   " - %lf ounce(s)\n"
		   " - %lf tablespoon(s)\n"
		   " - %lf teaspoon(s)\n", cup, pint, ounce, tablespoon, teaspoon); 

	return 0;
}
