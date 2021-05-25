/* Alternate output of line of files
   filename: Ch13Ex7.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "get_str.h"
#include <stdio.h>
#include <stdlib.h>

#define NEWLINE_CHAR '\n'
#define MAX_LENGTH 81

int main(void)
{
	FILE *f_p_1, *f_p_2;
	char file_name_1[MAX_LENGTH];
	char file_name_2[MAX_LENGTH];
	int ch_1 = 0, ch_2 = 0;

	fprintf(stdout, "Enter the name of the first file, up to %d characters:\n",
		MAX_LENGTH);
	get_str(file_name_1, MAX_LENGTH);
	if((f_p_1 = fopen(file_name_1, "r")) == NULL) {
		fprintf(stderr, "Error: can't open file \"%s\"\n", file_name_1);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "Enter the name of the second file, "
		"up to %d characters:\n", MAX_LENGTH);
	get_str(file_name_2, MAX_LENGTH);
	if((f_p_2 = fopen(file_name_2, "r")) == NULL) {
		fprintf(stderr, "Error: can't open file \"%s\"\n", file_name_2);
		exit(EXIT_FAILURE);
	}
	putc('\n', stdout);
	while(ch_1 != EOF || ch_2 != EOF) {
		while((ch_1 = getc(f_p_1)) != EOF) {
			putc(ch_1, stdout);
			if(ch_1 == NEWLINE_CHAR)
				break;
		}
		while((ch_2 = getc(f_p_2)) != EOF) {
			putc(ch_2, stdout);
			if(ch_2 == NEWLINE_CHAR)
				break;
		}
	}
	if(fclose(f_p_1) != 0 || fclose(f_p_2) != 0) {
		fprintf(stderr, "Error when closing files\n");
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "Program is over\n");

	return 0;
}
