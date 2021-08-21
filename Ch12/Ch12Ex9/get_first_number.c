#include "get_first_number.h"
#include <stdio.h>
#include <stdlib.h>

int get_first_number()
{
	int number;
	char ch;

	while(scanf("%d", &number) != 1) {
		while((ch = getchar()) != '\n') {
			if(ch == EOF) {
				printf("Error 2: input interrupted!\nExit\n");
				exit(EXIT_FAILURE);
			}
			putchar(ch);
		}
		printf(" is not a integer number!\n"
			   "Enter a integer number such as 1, 2 or 3: ");
	}
	while((ch = getchar()) != '\n') {
		if(ch == EOF) {
			printf("Error 2: input interrupted!\nExit\n");
			exit(EXIT_FAILURE);
		}
		continue;
	}

	return number;
}
