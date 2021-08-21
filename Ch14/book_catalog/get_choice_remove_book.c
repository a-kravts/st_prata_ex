#include "get_choice_remove_book.h"
#include "get_uint.h"
#include <stdio.h>

unsigned int get_choice_remove_book(unsigned int books_ctr,
	const unsigned int* chosen_books)
{
	unsigned int choice, i = 1;
	enum {not_empty, empty};
	unsigned int catalog_state = empty;

	printf("Book numbers available for deletion:\n");
	while(i <= books_ctr) {
		if(!chosen_books[i]) {
			printf("%u ", i);
			if(!(i % 10))
				putchar('\n');
			catalog_state = not_empty;
		}
		i++;
	}
	if(catalog_state) {
		printf("Book catalog is empty\n");
		return 0;
	}
	printf("\nEnter the number of the book\n"
		"you want to remove or '0' to exit: ");
	choice = get_uint();
	while(chosen_books[choice]) {
		printf("Enter the number of the book available for deletion\n"
			"or '0' to exit: ");
		choice = get_uint();
	}
	return choice;
}
