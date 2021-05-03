/* Counting words letters numbers and punctuation marks
   filename: Ch11Ex12.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0

int main()
{
	char ch;
	int state = OUT;
	int words = 0;
	int lowercase = 0;
	int uppercase = 0;
	int numbers = 0;
	int punct_marks = 0;
	
	printf("Enter any characters(EOF to exit):\n");
	while((ch = getchar()) != EOF) {
		if(isspace(ch))
			state = OUT;
		else {
			if(isalnum(ch)) {
				if(state == OUT) {
					state = IN;
					words++;
				}
				if(isupper(ch))
					uppercase++;
				else if(islower(ch))
					lowercase++;
				else if(isdigit(ch))
					numbers++;
			}
			else if(ispunct(ch))
				punct_marks++;
		}
	}
	printf("\n--------RESULT--------\n"
		   "word(s):             %d\n"
		   "lowercase letter(s): %d\n"
		   "uppercase letter(s): %d\n"
		   "number(s):           %d\n"
		   "punctuation mark(s): %d\n", words, lowercase, uppercase, numbers,
		   								punct_marks);

	return 0;
}
