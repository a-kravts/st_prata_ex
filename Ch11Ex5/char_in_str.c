#include "char_in_str.h"
#include <stdio.h>

char *char_in_str(char *str, unsigned char ch)
{
	for(; *str; str++)
		if(*str == ch)
			return str;
	
	return NULL;
}
