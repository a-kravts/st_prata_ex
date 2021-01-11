/* input/output letters
   filename: Ch6Ex1.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

#define number_of_letters 26			/* in the English alphabet */
#define first_letter 'a'
#define last_letter 'z'

int main()
{
	char letters[number_of_letters];
	int i;								/* index for loop */
	char character;
	
	for(i = 0, character = first_letter; character <= last_letter;
		i++, character++)
		letters[i] = character;
	for(i = 0; i < number_of_letters; i++)
		printf("%3c", letters[i]);
	printf("\n");
	
	return 0;
}
