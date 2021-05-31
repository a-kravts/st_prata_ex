#include "get_first_long.h"
#include <stdio.h>
#include <stdlib.h>

static void check_for_interruption_of_input(char ch);

long get_first_long()
{
	long number;
	char ch;

	while(scanf("%ld", &number) != 1) {
		while((ch = getchar()) != '\n') {
			check_for_interruption_of_input(ch);
			putchar(ch);
		}
		printf(" is not a integer number!\n"
			   "Enter a integer number such as 1, 2 or 3: ");
	}
	while((ch = getchar()) != '\n') {
		check_for_interruption_of_input(ch);
		continue;
	}

	return number;
}

static void check_for_interruption_of_input(char ch)
{
	if(ch == EOF) {
		printf("\nError: input interrupted\n");
		exit(EXIT_FAILURE);
	}
}
