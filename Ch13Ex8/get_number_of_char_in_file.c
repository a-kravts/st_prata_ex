/* Counting the number of occurrences of a character in a file */

#include "get_number_of_char_in_file.h"
#include <stdio.h>

#define PRINT_ERROR_MSGS 1

int get_number_of_char_in_file(char ch, char *file_name)
{
	FILE *file_ptr;
	int hit_ctr = 0;
	char current_ch;

	if((file_ptr = fopen(file_name, "r")) == NULL) {
		if(PRINT_ERROR_MSGS)
			fprintf(stderr, "Error: can't open file \"%s\"\n", file_name);
		return -1;
	}
	while((current_ch = getc(file_ptr)) != EOF)
		if(current_ch == ch)
			hit_ctr++;
	if(fclose(file_ptr) != 0) {
		if(PRINT_ERROR_MSGS)
			fprintf(stderr, "Error when closing file \"%s\"\n", file_name);
		return -2;
	}

	return hit_ctr;
}
