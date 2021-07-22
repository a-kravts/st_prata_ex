#include "submenu_display_book.h"
#include "show_submenu_display_book.h"
#include "get_choice_submenu.h"
#include "book_catalog_definitions.h"
#include "malloc_for_book_t.h"
#include "fread_book_t.h"
#include "sort_by_index.h"
#include "sort_by_title.h"
#include "sort_by_pages.h"
#include "display_book_t.h"
#include "border.h"
#include <stdlib.h>
#define EXIT_CHAR 'e'

void submenu_display_book(unsigned int ctr, char *file_name)
{
	char choice;
	book_t *book_arr;
	enum {border_char = '-', line_limit = 80};

	book_arr = malloc_for_book_t(ctr);
	fread_book_t(book_arr, ctr, file_name);
	show_submenu_display_book();
	while((choice = get_choice_submenu()) != EXIT_CHAR) {
		switch(choice) {
			case 'o': sort_by_index(book_arr, ctr); break; /*original_order*/
			case 't': sort_by_title(book_arr, ctr); break;
			case 'p': sort_by_pages(book_arr, ctr); break;
		}
		border(border_char, line_limit);
		display_book_t(book_arr, ctr);
		border(border_char, line_limit);
		show_submenu_display_book();
	}
	free(book_arr);
}
