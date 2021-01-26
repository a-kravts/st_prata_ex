/* Сounting spaces, new lines and other characters
   filename: Ch7Ex1.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

#define STOP '#'
#define SPACE ' '
#define NEW_LINE '\n'

int main()
{
	char c;								/* for entered characters */
	int cnt_spaces = 0;
	int cnt_new_lines = 0;
	int cnt_other_chars = 0;
	
	printf("Type something('#' to exit):\n");
	while((c = getchar()) != STOP) {
		if(c == SPACE)
			cnt_spaces++;
		else if(c == NEW_LINE)
			cnt_new_lines++;
		else
			cnt_other_chars++;
	}
	printf("\nNumber of spaces = %d\n"
		   "Number of new lines = %d\n"
		   "Number of other characters = %d\n", cnt_spaces,
												cnt_new_lines,
												cnt_other_chars);
	
	return 0;
}
