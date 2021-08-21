/* Testing a function that reverses a string
   filename: Ch11Ex9.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "reverse_str.h"
#include "get_str.h"
#include <stdio.h>

#define LIMIT 10

int main()
{
	char str[LIMIT];
	
	printf("Enter a string up to %d characters"
		   "(EOF to exit):\n", LIMIT);
	while(get_str(str, LIMIT) != NULL) {
		reverse_str(str);
		printf("After reversing:\n"
			   "%s\n", str);
		puts("\nRepeat entering string(EOF to exit):");
	}
	
	return 0;
}
