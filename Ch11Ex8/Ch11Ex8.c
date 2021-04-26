/* Testing a function that returns a pointer to a string inside another string
   filename: Ch11Ex8.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "part_in_str.h"
#include "get_str.h"
#include <stdio.h>

#define LIMIT 10
#define LIMIT_OF_PART 5

int main()
{
	char str[LIMIT];
	char part[LIMIT_OF_PART];
	char *p_str;
	char *p_part_in_str;
	
	printf("Enter a string up to %d characters\n"
		   "and a string up to %d characters\n"
		   "(EOF to exit):\n", LIMIT, LIMIT_OF_PART);
	while(get_str(str, LIMIT) != NULL && get_str(part, LIMIT_OF_PART) != NULL) {
		puts("You entered:");
		puts(str);
		puts(part);
		for(p_str = str; *p_str; p_str++)	
			printf("[%c] : %p\n", *p_str, p_str);
		if((p_part_in_str = part_in_str(str, part)))
			printf("\n[%c] : %p\n", *p_part_in_str, p_part_in_str);
		else
			puts("\nNo matches.");
		puts("\nRepeat entering two strings(EOF to exit):");
	}
	
	return 0;
}
