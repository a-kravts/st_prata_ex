/* sort strings in ascending order of length */
#include "sort_str_by_length.h"
#include "border.h"
#include <string.h>
#include <stdio.h>

void sort_str_by_length(char **p_str, int count)
{
	char *tmp;
	int top, seek;
	
	for(top = 0; top < count - 1; top++)
		for(seek = top + 1; seek < count; seek++)
			if(strlen(p_str[top]) > strlen(p_str[seek])) {
				tmp = p_str[top];
				p_str[top] = p_str[seek];
				p_str[seek] = tmp;
			}
	border(30, '=');
	for(top = 0; top < count; top++)
		puts(p_str[top]);
	border(30, '=');
}
