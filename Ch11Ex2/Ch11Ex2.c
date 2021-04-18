/* Testing a function that reads n characters from stdin
   filename: Ch11Ex2.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "get_n_char.h"
#include <stdio.h>

#define LIMIT 10

int main()
{
	char array[LIMIT];
	
	printf("Enter %d characters:\n", LIMIT);
	get_n_char(array, LIMIT);
	puts(array);
	
	return 0;
}
