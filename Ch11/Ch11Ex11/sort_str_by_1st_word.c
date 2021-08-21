/* sort strings in ascending order of length of the first word */
#include "sort_str_by_1st_word.h"
#include "get_1st_word.h"
#include "border.h"
#include <string.h>
#include <stdio.h>

#define LIMIT 10

void sort_str_by_1st_word(char **p_str, int count)
{
	char *tmp;
	int top, seek;
	char word_1[LIMIT];
	char word_2[LIMIT];
	
	for(top = 0; top < count - 1; top++) 
		for(seek = top + 1; seek < count; seek++) {
			get_1st_word(word_1, p_str[top], LIMIT);
			get_1st_word(word_2, p_str[seek], LIMIT);
			if(strlen(word_1) > strlen(word_2)) {
				tmp = p_str[top];
				p_str[top] = p_str[seek];
				p_str[seek] = tmp;
			}
		}
	border(30, '=');
	for(top = 0; top < count; top++)
		puts(p_str[top]);
	border(30, '=');
}
