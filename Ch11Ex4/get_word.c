#include "get_word.h"
#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

void get_word(char *str, unsigned int limit)
{
	char c;
	unsigned int i = 0, j = 0;
	bool in_word = false;
	
	for(; i < limit && (c = getchar()) != EOF; i++) {
		if(!isspace(c)) {
			str[j] = c;
			j++;
			in_word = true;
		}
		else if(isspace(c) && in_word)
			break;
	}
	for(; j <= limit; j++)
		str[j] = '\0';
	while(getchar() != '\n')
		continue;
}
