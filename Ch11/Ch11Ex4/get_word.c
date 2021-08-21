#include "get_word.h"
#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

void get_word(char *str, unsigned int limit)
{
	char c;
	unsigned int i = 0;
	char *end_str = str + limit;
	bool in_word = false;
	
	for(; i < limit && (c = getchar()) != EOF; i++) {
		if(!isspace(c)) {
			*(str++) = c;
			in_word = true;
		}
		else if(in_word)
			break;
	}
	for(; str <= end_str; str++)
		*str = '\0';
	while(c != '\n' && getchar() != '\n')
		continue;
}
