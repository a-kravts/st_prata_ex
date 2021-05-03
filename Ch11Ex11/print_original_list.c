#include "border.h"
#include <stdio.h>

void print_original_list(char (*str)[30], int count)
{
	int i;
	
	border(30, '=');
	for(i = 0; i < count; i++)
		puts(str[i]);
	border(30, '=');
}
