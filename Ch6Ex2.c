/* character output using a nested loop
   filename: Ch6Ex2.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

#define CHARACTER '$'
#define LIMIT 5

int main()
{
	int i, j;						/* indexes for loops */
	
	for(i = 1; i <= LIMIT; i++) {
		for(j = 0; j < i; j++)
			printf("%c", CHARACTER);
		printf("\n");
	}
	return 0;
}
