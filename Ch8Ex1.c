/* Сounting the number of characters
   filename: Ch8Ex1.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	int ch;
	int number_of_chars = 0;
		
	printf("Enter any characters(EOF to exit):\n");
	while((ch = getchar()) != EOF)
		number_of_chars++;
	printf("\nNumber of entered characters = %d\n", number_of_chars);
	
	return 0;
}	
