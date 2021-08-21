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
	printf("Enter the number of books to add, or '0' to exit\n"
		"You can add maximum %d book(s): ", limit);
	choice = get_uint();
	while(choice > limit) {
		printf("Invalid value\nPlease try again: ");
		choice = get_uint();
	}
	return choice;
}
