#include "get_str.h"
#include <stdio.h>
#include <string.h>

char *get_str(char *dest, int max_length)
{
	char *ret_val;
	char *cur_val;
	char ch;

	ret_val = fgets(dest, max_length, stdin);
	if(ret_val) {
		cur_val = strchr(dest, '\n');
		if(cur_val)
			*cur_val = '\0';
		else
			while((ch = getchar()) != '\n' && ch != EOF)
				continue;
	}
	return ret_val;
}
