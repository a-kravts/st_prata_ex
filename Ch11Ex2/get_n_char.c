#include "get_n_char.h"
#include <ctype.h>
#include <stdio.h>

void get_n_char(char *str, unsigned int n)
{
	char c;
	unsigned int i = 0;
	
	while(i < n && (c = getchar()) != EOF) {
		if(isspace(c)) {
			str[i] = '\0';
			break;
		}
		str[i] = c;
		i++;
	}
}
