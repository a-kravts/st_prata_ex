#include "mk_file_with_random_int.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define RANGE 10

void mk_file_with_random_int(char *file_name, int rows, int columns)
{
	int r, c; /* counters for rows and columns */
	FILE *file_ptr;
	
	if((file_ptr = fopen(file_name, "w")) == NULL) {
		fprintf(stdout, "Error: can't open file \"%s\"", file_name);
		exit(EXIT_FAILURE);
	}
	srand((unsigned int) time(NULL));
	for(r = 0; r < rows; r++) {
		for(c = 0; c < columns; c++)
			fprintf(file_ptr, "%d ", (rand() % RANGE));
		putc('\n', file_ptr);
	}
	if(fclose(file_ptr) != 0) {
		fprintf(stdout, "Error: can't close file \"%s\"", file_name);
		exit(EXIT_FAILURE);
	}
}
