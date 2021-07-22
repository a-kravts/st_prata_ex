#include "malloc_for_book_t.h"
#include "book_catalog_definitions.h"
#include <stdlib.h>
#include <stdio.h>

book_t *malloc_for_book_t(unsigned int number)
{
	book_t *ptr = (book_t *)malloc(number * size_book_t);
	if(!ptr) {
		fprintf(stderr, "Memory allocation failure\n");
		exit(EXIT_FAILURE);
	}
	return ptr;
}
