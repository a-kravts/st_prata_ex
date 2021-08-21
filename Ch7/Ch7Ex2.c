/* Output of characters and their ascii codes
   filename: Ch7Ex2.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

#define STOP '#'
#define LIMIT_OF_LINE 8
#define FIRST_VISIBLE_ASCII_CHAR '!'

int main()
{
	char c;								/* for entered characters */
	int ctr_chars;
	
	printf("Type any characters('#' to exit):\n");
	for(ctr_chars = 0; (c = getchar()) != STOP; ctr_chars++) {
		if(ctr_chars % LIMIT_OF_LINE == 0)
			printf("\n");
		if(c < FIRST_VISIBLE_ASCII_CHAR)
			printf("  [%3d] ", c);
		else
			printf(" %c[%3d] ", c, c);
		if(c == '\n') {
			ctr_chars = -1;
			printf("\nType any characters('#' to exit):\n");
		}
	}
	
	return 0;
}
