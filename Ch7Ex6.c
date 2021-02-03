/* Counting the number of occurrences of the sequence "ei"
   filename: Ch7Ex6.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#include <stdbool.h>

#define STOP '#'

int main()
{
	char current_ch;
	bool is_e  = false;
	int number_of_occurrences_ei = 0;
	
	printf("Enter any characters('#' to exit):\n");
	while((current_ch = getchar()) != STOP) {
		if(current_ch == 'e')
			is_e = true;
		else if(current_ch == 'i' && is_e) {
			number_of_occurrences_ei++;
			is_e = false;
		}
		else
			is_e = false;
	}
	printf("\nNumber of occurrences of the sequence \"ei\" = %d\n", 
			number_of_occurrences_ei);
	
	
	return 0;
}

