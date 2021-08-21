/* Testing a functions for working with strings
   filename: Ch11Ex11.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "selection_menu.h"
#include "get_str.h"
#include <stdio.h>

#define LIMIT 10
#define LENGTH 30

int main()
{
	char str[LIMIT][LENGTH];
	char *p_str[LIMIT];
	int count = 0;
	
	printf("Enter up to %d strings(EOF to stop):\n", LIMIT);
	while(count < LIMIT && get_str(str[count], LENGTH) != NULL &&
		  str[count][0] != '\0') {
		p_str[count] = str[count];
		count++;
	}
	selection_menu(str, p_str, count);
	puts("\nProgram is over.");
	
	return 0;
}
