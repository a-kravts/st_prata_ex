#include "show_main_menu.h"
#include "book_catalog_definitions.h"
#include "border.h"
#include <stdio.h>

void show_main_menu(unsigned int ctr)
{
	enum {border_char = '~', line_limit = 80};

	border(border_char, line_limit);
	printf("Main menu:\n");
	if(ctr) {
		printf("d) display book(s)\n");
		printf("r) remove book(s)\n");
	}
	if(ctr < max_books)
		printf("a) add book(s)\n");
	printf("e) exit\n");
	border(border_char, line_limit);
}
