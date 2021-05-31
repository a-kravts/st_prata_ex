/* Selective printing of file contents
   filename: Ch13Ex10.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "get_str.h"
#include "get_first_long.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 81
#define STOP_CHAR '\n'

int main(void)
{
	char file_name[MAX_LENGTH];
	FILE *file_ptr;
	long position;
	int ch;
	int number_of_ch = 0; /* in the open file */

	fprintf(stdout, "Enter the name of the file, up to %d characters\n",
		MAX_LENGTH);
	if(get_str(file_name, MAX_LENGTH) == NULL) {
		fprintf(stdout, "Error: invalid file name\n");
		exit(EXIT_FAILURE);
	}
	if((file_ptr = fopen(file_name, "r")) == NULL) {
		fprintf(stderr, "Error: can't open file \"%s\"\n", file_name);
		exit(EXIT_FAILURE);
	}
	while((ch = getc(file_ptr)) != EOF)
		number_of_ch++;

	fprintf(stdout, "Enter the starting position for printing from 0 to %d\n"
		"('< 0' to exit): ", number_of_ch);
	while((position = get_first_long()) >= 0) {
		fseek(file_ptr, position, SEEK_SET);
		if(position > number_of_ch) {
			fprintf(stdout, "Enter number from 0 to %d('< 0' to exit):",
				number_of_ch);
			continue;
		}
		while((ch = getc(file_ptr)) != STOP_CHAR && ch != EOF)
			putc(ch, stdout);
		putc('\n', stdout);
		fprintf(stdout, "\nEnter the starting position for printing "
			"from 0 to %d\n('< 0' to exit): ", number_of_ch);
	}

	if(fclose(file_ptr) != 0) {
		fprintf(stderr, "Error when closing file \"%s\"\n", file_name);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "Program is over\n");

	return 0;
}
