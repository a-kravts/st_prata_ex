/* Testing a function that reads first word(non-space characters) from stdin
   filename: Ch11Ex4.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "get_word.h"
#include <stdio.h>

#define LIMIT 10

int main()
{
	char array[LIMIT];
	
	printf("Enter %d characters:\n", LIMIT);
	get_word(array, LIMIT);
	puts(array);
	
	return 0;
}
