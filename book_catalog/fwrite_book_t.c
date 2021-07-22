#include "fwrite_book_t.h"
#include "check_file_open.h"
#include "check_file_close.h"
#include <stdlib.h>
#include <stdio.h>

void fwrite_book_t(book_t *book_ptr, long number, const char *file_name,
	const char *mode)
{
	FILE *file_ptr;
	long written_down;

	file_ptr = check_file_open(file_name, mode);
	written_down = fwrite(book_ptr, size_book_t, number, file_ptr);
	if(written_down != number) {
		fprintf(stderr, "Error: can't write to file \"%s\"\n", file_name);
		exit(EXIT_FAILURE);
	}
	check_file_close(file_ptr, file_name);
}
