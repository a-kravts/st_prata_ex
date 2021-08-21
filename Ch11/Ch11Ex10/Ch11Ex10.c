/* Testing a function that removes a spaces
   filename: Ch11Ex10.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "remove_spaces.h"
#include "get_str.h"
#include <stdio.h>

#define LIMIT 15

int main()
{
	char str[LIMIT];
	
	printf("Enter a string up to %d characters"
		   "(EOF to exit):\n", LIMIT);
	while(get_str(str, LIMIT) != NULL) {
		remove_spaces(str);
		printf("After removing:\n"
			   "%s\n", str);
		puts("\nRepeat entering string(EOF to exit):");
	}
	
	return 0;
}
