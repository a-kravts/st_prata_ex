#include "remove_confirmation.h"
#include "display_book_t.h"
#include "get_first_char.h"
#include <stdio.h>
#include <ctype.h>

char remove_confirmation(book_t *book)
{
	printf("Are you sure you want to remove:\n");
	display_book_t(book, 1);
	printf("(y/n): ");

	return tolower(get_first_char());
}
