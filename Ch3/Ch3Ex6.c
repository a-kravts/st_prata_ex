/* calculating the number of water molecules in quarts 
   filename: Ch3Ex6.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	double mass_of_molecule = 3.0e-23;		/* in grams */
	int mass_of_quart_water = 950;			/* in grams */
	int number_of_quarts_water;
	int correct_enter;
	double result;

	printf("Enter the number of quarts water: ");
	correct_enter = scanf("%d", &number_of_quarts_water);
	if(correct_enter != 1) {
		printf("Error enter. Exit...\n");
		return 1;
	}
	result = (mass_of_quart_water * number_of_quarts_water)/mass_of_molecule;
	printf("In %d quarts "
		   "the number of water molecules %le.\n", number_of_quarts_water,
												   result);

	return 0;
}
