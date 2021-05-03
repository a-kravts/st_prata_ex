#include "get_1st_word.h"
#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

void get_1st_word(char *dest, char *src, unsigned int limit)
{
	unsigned int i = 0;
	char *end_dest = dest + limit;
	bool in_word = false;
	
	for(; i < limit && *src; src++) {
		if(!isspace(*src)) {
			*(dest++) = *src;
			in_word = true;
		}
		else if(in_word)
			break;
	}
	for(; dest <= end_dest; dest++)
		*dest = '\0';
}
