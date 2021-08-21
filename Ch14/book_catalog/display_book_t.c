#include "display_book_t.h"
#include <stdio.h>

void display_book_t(book_t *book_arr, int limit)
{
	int i;

	for(i = 0; i < limit; i++) {
		printf("%3u) \"%s\" by author \"%s\": %u page(s)\n", 
			book_arr[i].index, book_arr[i].title, book_arr[i].author,
			book_arr[i].pages);
	}
}
