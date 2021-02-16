/* Check a function that returns the first non-whitespace character
   filename: Ch8Ex6.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

char get_first_non_space_char();

int main()
{
	int ch;
	
	printf("Enter any characters('q' to exit):\n");
	while((ch = get_first_non_space_char()) != 'q')
		printf("%c\n", ch);
	
	return 0;
}

char get_first_non_space_char()
{
	int ch, non_space;
	bool have_the_first = false;
	while((ch = getchar()) != '\n') {
		if(!isspace(ch) && !have_the_first) {
			non_space = ch;
			have_the_first = true;
		}
	}
	return non_space;
}
