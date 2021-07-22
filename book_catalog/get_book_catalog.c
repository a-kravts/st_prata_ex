#include "get_book_catalog.h"
#include "check_file_open.h"
#include "check_file_close.h"
#include "get_str.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_book_catalog(int argc, char **argv, char *catalog_file,
	int limit)
{
	FILE *file_ptr;

	if(argc < 2) {
		printf("Enter a name for the new file up to %d characters long\n"
			"for storing the book catalog: ", limit);
		if(!get_str(catalog_file, limit)) {
			fprintf(stderr, "Invalid filename\n");
			exit(EXIT_FAILURE);
		}
		file_ptr = check_file_open(catalog_file, "wx");
		check_file_close(file_ptr, catalog_file);
	} else if(argc == 2) {
		strncpy(catalog_file, argv[1], limit);
	} else {
		fprintf(stderr, "Usage: %s [catalog_file]\n", argv[0]);
		exit(EXIT_FAILURE);
	}
}
