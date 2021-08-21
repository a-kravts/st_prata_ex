#include "part_in_str.h"
#include <stdio.h>

char *part_in_str(char *str, char *part)
{
	char *return_str = NULL;
	char *current_str;
	char *current_part;
	
	for(; *str; str++) {
		current_str = str;
		current_part = part;
		while(*current_part == *current_str) {
			if(return_str == NULL)
				return_str = str;
			current_str++;
			current_part++;
			if(*current_part == '\0')
				return return_str;
		}
		return_str = NULL;
	}
	
	return return_str;
}
