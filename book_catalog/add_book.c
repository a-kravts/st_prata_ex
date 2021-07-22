#include "add_book.h"
#include "book_catalog_definitions.h"
#include "get_choice_add_book.h"
#include "malloc_for_book_t.h"
#include "get_uint.h"
#include "get_str.h"
#include "fwrite_book_t.h"
#include <stdlib.h>
#include <stdio.h>

void add_book(unsigned int *books_ctr_ptr, const char *file_name)
{
	book_t *book_arr;
	unsigned int i, current_index = *books_ctr_ptr;
	unsigned int number;	/*of books to write*/

	while((number = get_choice_add_book(*books_ctr_ptr))) {
		book_arr = malloc_for_book_t(number);
		for(i = 0; i < number; i++) {
			printf("Book number %u:\n", i + 1);
			printf("Enter the title of the book:\n");
			if(!get_str(book_arr[i].title, max_title)) {
				printf("Error: incorrectly entered title\n");
				goto quit;
			}
			printf("Now enter the author's first and last name:\n");
			if(!get_str(book_arr[i].author, max_author)) {
				printf("Error: incorrectly entered first and last name\n");
				goto quit;
			}
			printf("Now enter the number of pages in the book:\n");
			if((book_arr[i].pages = get_uint()) == 0)
				goto quit;
			book_arr[i].index = ++current_index;
			book_arr[i].status = 1;
		}
		fwrite_book_t(book_arr, number, file_name, "a");
		*books_ctr_ptr = current_index;
	quit:
		free(book_arr);
	}
}
