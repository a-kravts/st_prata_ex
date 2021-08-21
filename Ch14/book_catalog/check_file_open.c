#include "check_file_open.h"
#include <stdlib.h>

FILE *check_file_open(const char *file_name, const char *mode)
{
	FILE *file_ptr;
	if(!(file_ptr = fopen(file_name, mode))) {
		fprintf(stderr, "Error: can't open file \"%s\"\n", file_name);
		exit(EXIT_FAILURE);
	}
	return file_ptr;
}
