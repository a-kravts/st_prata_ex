#include "get_first_number.h"
#include <stdio.h>

int get_first_number()
{
	int number;
	char ch;
	
	while(scanf("%d", &number) != 1) {
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not a integer number!\n"
			   "Enter a integer number such as 1, 2 or 3: ");
	}
	
	return number;
}
