#include "reverse_str.h"
#include <stdio.h>
#include <string.h>

void reverse_str(char *str)
{
	char tmp;
	char *middle_str = str + (strlen(str) / 2);
	char *end = str + (strlen(str) - 1);			/* ? */
	
	for(; str < middle_str; str++, end--) {
		tmp = *str;
		*str = *end;
		*end = tmp;
	}	
}
