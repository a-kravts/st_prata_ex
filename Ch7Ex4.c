/* Reading and outputting characters using "if else"
   filename: Ch7Ex4.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#define STOP '#'

int main()
{
	int ch;									/* for entered characters */
	int number_of_replaced_dots = 0;
	int number_of_replaced_exclamation_marks = 0;
	
	printf("Enter any characters('#' to exit):\n");
	while((ch = getchar()) != STOP) {
		if(ch == '.') {
			putchar('!');
			number_of_replaced_dots++;
		}
		else if(ch == '!') {
			printf("!!");
			number_of_replaced_exclamation_marks++;
		}
		else
			putchar(ch);
	}
	printf("\nNumber of replacements = %d\n", 
			number_of_replaced_dots + number_of_replaced_exclamation_marks);
	
	
	return 0;
}

