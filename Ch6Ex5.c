/* outputting letters in a pyramid shape using nested loops
   filename: Ch6Ex5.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#include <ctype.h>

#define FIRST_LETTER 'A'

int main()
{
	int i, j;						/* indexes for loops */
	int number_of_rows;				
	int correct_enter;
	char entered_letter;
	char current_letter;
	
	printf("enter any uppercase letter of the English alphabet: ");
	correct_enter = scanf(" %c", &entered_letter);
	if(correct_enter != 1) {
		printf("Error enter. Exit...");
		return 1;
	}
	entered_letter = toupper(entered_letter);
	number_of_rows = entered_letter - FIRST_LETTER;
	for(i = 0; i <= number_of_rows; i++) {
		for(j = 0; j < number_of_rows - i; j++)
			printf(" ");
		for(j = 0, current_letter = FIRST_LETTER; j <= i; j++, current_letter++)
			printf("%c", current_letter);
		for(current_letter -= 2; current_letter >= FIRST_LETTER;
			current_letter--)
			printf("%c", current_letter);
		printf("\n");
	}
	return 0;
}
