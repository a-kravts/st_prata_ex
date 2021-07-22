/* Sorting by pages in ascending order */
#include "sort_by_pages.h"

void sort_by_pages(book_t *book_arr, int limit)
{
	book_t tmp;
	int top, seek;

	for(top = 0; top < limit - 1; top++) {
		for(seek = top + 1; seek < limit; seek++) {
			if(book_arr[top].pages > book_arr[seek].pages) {
				tmp = book_arr[top];
				book_arr[top] = book_arr[seek];
				book_arr[seek] = tmp;
			}
		}
	}
}
