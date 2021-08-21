/* Years to seconds
   filename: Ch3Ex5.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	int age;
	double seconds_in_year = 3.156e7;
	int correct_enter;

	printf("Enter your age in years: ");
	correct_enter = scanf("%d", &age);
	if(correct_enter != 1) {
		printf("Error enter. Exit...\n");
		return 1;
	}
	printf("%d years equals %e seconds.\n", age, seconds_in_year * age);

	return 0;
}
