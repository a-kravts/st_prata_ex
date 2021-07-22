#include "get_uint.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int get_uint()
{
	char ch;
	int number;

	if(scanf("%d", &number) != 1 || number < 0) {
		printf("Error: incorrectly entered number\n");
		number = 0;
	}
	while((ch = getchar()) != '\n') {
		if(ch == EOF) {
			printf("\nError: input interrupted\n");
			exit(EXIT_FAILURE);
		}
	}
	return (unsigned int)number;
}
