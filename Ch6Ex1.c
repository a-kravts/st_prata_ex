/* input/output letters
   filename: Ch6Ex1.c
   ver 1.1
   Alexandr Kravtsov */

#include <stdio.h>

#define NUMBER_OF_LETTERS 26			/* in the English alphabet */
#define FIRST_LETTER 'a'
#define LAST_LETTER 'z'

int main()
{
	char letters[NUMBER_OF_LETTERS];
	int i;								/* index for loop */
	char character;
	
	for(i = 0, character = FIRST_LETTER; character <= LAST_LETTER;
		i++, character++)
		letters[i] = character;
	for(i = 0; i < NUMBER_OF_LETTERS; i++)
		printf("%3c", letters[i]);
	printf("\n");
	
	return 0;
}
