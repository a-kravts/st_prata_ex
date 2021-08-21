/* Guessing a number in the range from 1 to 100
   filename: Ch8Ex5.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	int ch;
	int lower_limit = 0;
	int upper_limit = 101;
	int guess = upper_limit / 2;
	
	printf("Choose any number from 1 to 100. I will try to guess it.\n"
		   "Press 'y' if my guess is correct,\n"
		   "press 'g' if the guess is greater and\n"
		   "press 'l' if the guess is less('q' to exit).\n");
	printf("Is your number %d?\n", guess);
	while((ch = getchar()) != 'q') {
		if(ch == 'y') {
			printf("I knew what I could do this!\n");
			break;
		}
		else if(ch == 'g') {
			upper_limit = guess;
			guess -= (upper_limit - lower_limit) / 2;
			printf("Is your number %d?\n", guess);
		}
		else if(ch == 'l') {
			lower_limit = guess;
			guess += (upper_limit - lower_limit) / 2;
			printf("Is your number %d?\n", guess);
		}
	}	
	
	return 0;
}	
