/* Counting lowercase and uppercase letters and other characters
   filename: Ch8Ex3.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#include <ctype.h>

int main()
{
	int ch;
	int lowercase = 0; 
	int uppercase = 0; 
	int other_chars = 0;
	
	printf("Enter any characters(EOF to exit):\n");
	while((ch = getchar()) != EOF) {
		if(islower(ch))
			lowercase++;
		else if(isupper(ch))
			uppercase++;
		else
			other_chars++;
	}
	printf("\nNumber of lowercase letters = %d\n"
		   "Number of uppercase letters = %d\n"
		   "Number of other characters = %d\n", lowercase, uppercase,
		   										other_chars);
	
	return 0;
}	
