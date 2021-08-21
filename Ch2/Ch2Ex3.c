/* print my age in years and days
   filename:Ch2Ex3.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	int my_age = 26;
	int year = 365;
	
	printf("My age in years = %d.\n"
		   "My age in days = %d.\n", my_age, my_age*year);
	
	return 0;
}

