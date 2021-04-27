#include "remove_spaces.h"
#include <string.h>

void remove_spaces(char *str)
{
	char *tmp_str;
	char *cur_str;

	for(; *str; str++)
		while(*str == ' ') {
			cur_str = str;
			tmp_str = str + 1;
			for(; *cur_str; cur_str++, tmp_str++)
				*cur_str = *tmp_str;	
		}
}
