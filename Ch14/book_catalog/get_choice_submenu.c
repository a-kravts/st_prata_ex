#include "get_choice_submenu.h"
#include "get_first_char.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

char get_choice_submenu()
{
	char choice;
	char *match_str = "otpe", *tmp_str;

	printf("Your choice: ");
	choice = tolower(get_first_char());
	while(!strchr(match_str, choice)) {
		printf("Enter ");
		for(tmp_str = match_str; *tmp_str; tmp_str++)
			printf("'%c'%c ", *tmp_str, *(tmp_str + 1)? ',' : ':');
		choice = tolower(get_first_char());
	}
	return choice;
}
