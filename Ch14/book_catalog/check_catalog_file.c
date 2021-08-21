#include "check_catalog_file.h"
#include "book_catalog_definitions.h"
#include "check_file_open.h"
#include "check_file_close.h"
#include <stdio.h>

unsigned int check_catalog_file(const char *catalog_file)
{
	book_t tmp;
	FILE *file_ptr;
	unsigned int ctr;

	file_ptr = check_file_open(catalog_file, "r");
	if(!fseek(file_ptr, -size_book_t, SEEK_END)) {	/*if not empty*/
		fread(&tmp, size_book_t, 1, file_ptr);		/*read the index of*/
		ctr = tmp.index;							/*the last structure*/
	} else {
		ctr = 0;
	}
	printf("In the file \"%s\" %d/%d books\n", catalog_file, ctr,
		max_books);
	check_file_close(file_ptr, catalog_file);

	return ctr;
}
