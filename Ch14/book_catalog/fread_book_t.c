#include "fread_book_t.h"
#include "check_file_open.h"
#include "check_file_close.h"
#include <stdlib.h>
#include <stdio.h>

void fread_book_t(book_t *book_ptr, long number, const char *file_name)
{
	FILE *file_ptr;
	long read;

	file_ptr = check_file_open(file_name, "r");
	read = fread(book_ptr, size_book_t, number, file_ptr);
	if(read != number) {
		fprintf(stderr, "Error: can't read from file \"%s\"\n", file_name);
		exit(EXIT_FAILURE);
	}
	check_file_close(file_ptr, file_name);
}
