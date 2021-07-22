#include "show_submenu_display_book.h"
#include "border.h"
#include <stdio.h>

void show_submenu_display_book()
{
	enum {border_char = '~', line_limit = 80};

	border(border_char, line_limit);
	printf("Submenu display book(s):\n");
	printf("o) original order\n");
	printf("t) sort by title in alphabetical order\n");
	printf("p) sort by pages in ascending order\n");
	printf("e) exit\n");
	border(border_char, line_limit);
}
