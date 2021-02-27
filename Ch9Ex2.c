/* Function that prints the character in the specified columns
   filename: Ch9Ex2.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

void ch_line(char ch, int i, int j);

int main()
{
	char character;
	int first_column, last_column;
	int correct_enter;
	
	printf("Enter character and the numbers of the first and last column:\n"),
	correct_enter = scanf(" %c%d%d", &character, &first_column, &last_column); 
	if(correct_enter != 3) {
		printf("Error enter!\nExit\n");
		return 1;
	}
	ch_line(character, first_column, last_column);
	
	return 0;
}	

void ch_line(char ch, int i, int j)
{
	int index = 1;
	for(; index < i; index++)
		putchar(' ');
	for(; index <= j; index++)
		putchar(ch);
	putchar('\n');
}
