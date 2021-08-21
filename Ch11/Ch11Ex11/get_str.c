#include "get_str.h"
#include <string.h>
#include <stdio.h>

char *get_str(char *str, int n)
{
	char *ret_val;
	char *cur_val;
	char ch;
	
	ret_val = fgets(str, n, stdin);
	if(ret_val) {
		if((cur_val = strchr(ret_val, '\n')))
			*cur_val = '\0';
		else
			while((ch = getchar()) != '\n' && ch != EOF)
				continue;
	}

	return ret_val;
}
