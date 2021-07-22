#include "get_choice_add_book.h"
#include "book_catalog_definitions.h"
#include "get_uint.h"
#include <stdio.h>

unsigned int get_choice_add_book(unsigned int books_ctr)
{
	int choice;
	int limit = max_books - books_ctr;

	if(!limit)
		return 0;
	printf("You can add maximum %d book(s)\n"
		"Enter the number of books to add, or '0' to exit: ", limit);
	while((choice = get_uint()) < 0 || choice > limit) {
		printf("Enter the number of books to add(up to %d),\n"
			"or '0' to exit: ", limit);
	}

	return choice;
}
