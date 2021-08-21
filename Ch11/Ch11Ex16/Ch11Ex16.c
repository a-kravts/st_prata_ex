/* Formatted character output
   filename: Ch11Ex16.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MSG "Enter any characters(EOF to exit):\n"

int main(int argc, char **argv)
{
	char ch;
	
	if(argv[1] == NULL || strcmp(argv[1], "-p") == 0) {
		printf(MSG);
		while((ch = getchar()) != EOF)
			putchar(ch);
	}
	else if(strcmp(argv[1], "-u") == 0) {
		printf(MSG);
		while((ch = getchar()) != EOF)
			putchar(toupper(ch));
	}
	else if(strcmp(argv[1], "-l") == 0) {
		printf(MSG);
		while((ch = getchar()) != EOF)
			putchar(tolower(ch));
	}
	else {
		puts("Error: unknown argument");
		return 1;
	}

	return 0;
}
