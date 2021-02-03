/* Reading and outputting characters using "switch"
   filename: Ch7Ex5.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#define STOP '#'

int main()
{
	char ch;									/* for entered characters */
	int number_of_replaced_dots = 0;
	int number_of_replaced_exclamation_marks = 0;
	
	printf("Enter any characters('#' to exit):\n");
	while((ch = getchar()) != STOP) {
		switch(ch) {
			case '.':
				putchar('!');
				number_of_replaced_dots++;
				break;
			case '!':
				printf("!!");
				number_of_replaced_exclamation_marks++;
				break;
			default:
				putchar(ch);
		}
	}
	printf("\nNumber of replacements = %d\n", 
			number_of_replaced_dots + number_of_replaced_exclamation_marks);
	
	
	return 0;
}

