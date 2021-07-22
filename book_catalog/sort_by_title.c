#include "sort_by_title.h"
#include <string.h>

void sort_by_title(book_t *book_arr, int limit)
{
	book_t tmp;
	int top, seek;

	for(top = 0; top < limit - 1; top++) {
		for(seek = top + 1; seek < limit; seek++) {
			if(strcmp(book_arr[top].title, book_arr[seek].title) > 0) {
				tmp = book_arr[top];
		 		book_arr[top] = book_arr[seek];
		 		book_arr[seek] = tmp;
			}
		}
	}
}
