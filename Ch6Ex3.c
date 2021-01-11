/* letters output using a nested loop
   filename: Ch6Ex3.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

#define FIRST_CHARACTER 'F'
#define LIMIT 6

int main()
{
	int i, j;						/* indexes for loops */
	char character;
	
	for(i = 1; i <= LIMIT; i++) {
		for(j = 0, character = FIRST_CHARACTER; j < i; j++, character--)
			printf("%c", character);
		printf("\n");
	}
	return 0;
}
