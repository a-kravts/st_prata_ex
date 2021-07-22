/* Sorting by indexes in ascending order(original order) */
#include "sort_by_index.h"

void sort_by_index(book_t *book_arr, int limit)
{
	book_t tmp;
	int top, seek;

	for(top = 0; top < limit - 1; top++) {
		for(seek = top + 1; seek < limit; seek++) {
		 	if(book_arr[top].index > book_arr[seek].index) {
		 		tmp = book_arr[top];
		 		book_arr[top] = book_arr[seek];
		 		book_arr[seek] = tmp;
			}
		}
	}
}
