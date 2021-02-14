/* Counting average number of letters in words
   filename: Ch8Ex4.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
	int ch;
	int number_of_letters = 0; 
	int number_of_words = 0;
	bool in_word = false; 
	
	printf("Enter any characters(EOF to exit):\n");
	while((ch = getchar()) != EOF) {
		if(isalpha(ch)) {
			number_of_letters++;
			in_word = true;
		}
		else if((isspace(ch) || ispunct(ch)) && in_word == true) {
			number_of_words++;
			in_word = false;
		}
	}
	if(in_word == true)
		number_of_words++;
	printf("\nAverage number of letters in words = %.1lf\n",
			(double)number_of_letters/number_of_words);
	
	return 0;
}	
