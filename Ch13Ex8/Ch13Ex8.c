/* Counting the occurrence of a character in files
   filename: Ch13Ex8.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "get_str.h"
#include "get_number_of_char_in_file.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 81

int main(int argc, char **argv)
{
	int ch;
	char file_name[MAX_LENGTH];
	int i;
	int number_of_ch = 0;

	if(argc < 2) {
		fprintf(stderr, "Usage: %s any_character [first_file_name ...]\n",
			argv[0]);
		exit(EXIT_FAILURE);
	}
	ch = argv[1][0];

	if(argc < 3) {
		fprintf(stdout, "Enter the name of the file, up to %d characters "
			"(empty line to exit):\n", MAX_LENGTH);
		while(get_str(file_name, MAX_LENGTH) != NULL && file_name[0] != '\0') {
			number_of_ch = get_number_of_char_in_file(ch, file_name);
			if(number_of_ch == -1)
				continue;
			if(number_of_ch == -2)
				exit(EXIT_FAILURE);
			fprintf(stdout, "The character '%c' appears in the \"%s\" "
				"%d times\n", ch, file_name, number_of_ch);
			fprintf(stdout, "Enter the name of the file, up to %d characters "
			"(empty line to exit):\n", MAX_LENGTH);
		}
	}
	else {
		for(i = 2; i < argc; i++) {
			number_of_ch = get_number_of_char_in_file(ch, argv[i]);
			if(number_of_ch == -1)
				continue;
			if(number_of_ch == -2)
				exit(EXIT_FAILURE);
			fprintf(stdout, "The character '%c' appears in the \"%s\" "
				"%d times\n", ch, argv[i], number_of_ch);
		}
	}
	fprintf(stdout, "Program is over\n");

	return 0;
}
