/* Check a function that returns the first non-whitespace character
   filename: Ch8Ex6.c
   ver 2.0
   Alexandr Kravtsov */

#include <stdio.h>
#include <ctype.h>

char get_first_non_space_char();

int main()
{
	int ch;
	
	printf("Enter any non-whitespace characters('q' to exit):\n");
	while((ch = get_first_non_space_char()) != 'q') 
		printf("%c\n", ch);
	
	return 0;
}

char get_first_non_space_char()
{
	int ch;
	while(1) {
		ch = getchar();
		if(!isspace(ch)) {
			while(getchar() != '\n')
				continue;
			return ch;
		}
		else
			continue;
	}
}
