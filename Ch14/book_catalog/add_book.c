#include "add_book.h"
#include "book_catalog_definitions.h"
#include "get_choice_add_book.h"
#include "malloc_for_book_t.h"
#include "get_uint.h"
#include "get_str.h"
#include "fwrite_book_t.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#define EMPTY_STR '\0'

void add_book(unsigned int *books_ctr_ptr, const char *file_name)
{
	book_t *book_arr;
	unsigned int i, current_index = *books_ctr_ptr;
	unsigned int number;	/*of books to write*/

	while((number = get_choice_add_book(*books_ctr_ptr))) {
		book_arr = malloc_for_book_t(number);
		for(i = 0; i < number; i++) {
			printf("Book number %u:\n", i + 1);
			printf("Enter the title of the book,\nup to %d characters: ",
				max_title);
			while(!get_str(book_arr[i].title, max_title) ||
				book_arr[i].title[0] == EMPTY_STR)
			{
				printf("Error: incorrectly entered title\n"
					"Please try again: ");
			}
			printf("Now enter the author's first and last name,\n"
				"up to %d characters: ", max_author);
			while(!get_str(book_arr[i].author, max_author) ||
				book_arr[i].author[0] == EMPTY_STR)
			{
				printf("Error: incorrectly entered first and last name\n"
					"Please try again: ");
			}
			printf("Now enter the number of pages in the book,\n"
				"up to %u: ", UINT_MAX);
			while(!(book_arr[i].pages = get_uint()) ||
				book_arr[i].pages >= UINT_MAX)
			{
				printf("Error: incorrectly entered number of pages\n"
					"Please try again: ");
			}
			book_arr[i].index = ++current_index;
			book_arr[i].status = 1;
		}
		fwrite_book_t(book_arr, number, file_name, "a");
		*books_ctr_ptr = current_index;
		free(book_arr);
	}
}
