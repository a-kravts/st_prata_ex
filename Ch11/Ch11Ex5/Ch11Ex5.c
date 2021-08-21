/* Testing a function that returns a pointer to the first occurrence of a
   character in a string
   filename: Ch11Ex5.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "char_in_str.h"
#include "get_str.h"
#include "get_first.h"
#include <stdio.h>

#define LIMIT 10

int main()
{
	char ch;
	char str[LIMIT];
	char *p_str;
	
	printf("Enter a string no longer than %d characters\n"
		   "and any single character "
		   "(EOF to exit):\n", LIMIT);
	while(get_str(str, LIMIT) != NULL && (ch = get_first()) != EOF) {
		for(p_str = str; *p_str; p_str++)	
			printf("[%c] : %p\n", *p_str, p_str);
		printf("char_in_str(str, '%c'): %p\n", ch, char_in_str(str, ch));
		puts("\nRepeat enter string and character(EOF to exit):");
	}
	
	return 0;
}
