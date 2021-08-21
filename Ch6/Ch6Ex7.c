/* output words in reverse order
   filename: Ch6Ex7.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#include <string.h>

#define LIMIT 10

int main()
{
	char word[LIMIT];
	int i;							/* index for loops */
	
	printf("enter a word no longer than 10 characters:\n");
	scanf("%10s", word);
	for(i = strlen(word); i >= 0; i--)
		printf("%c", word[i]);
	printf("\n");
	
	return 0;
}
