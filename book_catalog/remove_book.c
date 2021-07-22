#include "remove_book.h"
#include "book_catalog_definitions.h"
#include "get_choice_remove_book.h"
#include "remove_confirmation.h"
#include "malloc_for_book_t.h"
#include "fwrite_book_t.h"
#include "fread_book_t.h"
#include <stdlib.h>
#define ANSWER_YES 'y'

void remove_book(unsigned int *book_ctr_ptr, const char *file_name)
{
	unsigned int choice, i, j;
	unsigned int updated_book_ctr = *book_ctr_ptr;
	unsigned int available_books[max_books + 1] = {0};
	char answer;
	enum {remove, chosen};
	book_t *buffer_arr, *updated_arr = NULL;

	buffer_arr = malloc_for_book_t(*book_ctr_ptr);
	fread_book_t(buffer_arr, *book_ctr_ptr, file_name);
	choice = get_choice_remove_book(*book_ctr_ptr, available_books);
	while(choice) {
		answer = remove_confirmation(&buffer_arr[choice - 1]);
		if(answer == ANSWER_YES) {
			updated_book_ctr--;
			available_books[choice] = chosen;
			buffer_arr[choice - 1].status = remove;
		}
		choice = get_choice_remove_book(*book_ctr_ptr, available_books);
	}
	if(updated_book_ctr < *book_ctr_ptr) {
		if(updated_book_ctr) {
			updated_arr = malloc_for_book_t(updated_book_ctr);
			for(i = 0, j = 0; i < *book_ctr_ptr; i++) {
				if(buffer_arr[i].status) {
					updated_arr[j] = buffer_arr[i];
					updated_arr[j].index = j + 1;
					j++;
				}
			}
		}
		fwrite_book_t(updated_arr, updated_book_ctr, file_name, "w");
		free(updated_arr);
		*book_ctr_ptr = updated_book_ctr;
	}
	free(buffer_arr);
}
