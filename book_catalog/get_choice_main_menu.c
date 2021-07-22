#include "get_choice_main_menu.h"
#include "book_catalog_definitions.h"
#include "get_first_char.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define INCOMPLETE_CATALOG	"drae"	/*symbols available for selection*/
#define FULL_CATALOG 		"dre"	/*in main menu*/
#define EMPTY_CATALOG		"ae"

char get_choice_main_menu(unsigned int books_ctr)
{
	char choice;
	char *match_str, *tmp_str;

	if(books_ctr && books_ctr < max_books) {
		match_str = INCOMPLETE_CATALOG;
	} else if (books_ctr == max_books) {
		match_str = FULL_CATALOG;
	} else {
		match_str = EMPTY_CATALOG;
	}
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
