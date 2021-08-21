/* Search for a string in a file
   filename: Ch13Ex11.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_BUFFER_SIZE 81

int main(int argc, char **argv)
{
	FILE *file_ptr;
	char buffer[MAX_BUFFER_SIZE];
	bool match = false;
	if(argc < 3) {
		fprintf(stderr, "Usage: %s \"any_string\" file_name\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if(argv[1][0] == '\0') {
		fprintf(stderr, "Error: empty string\n");
		exit(EXIT_FAILURE);
	}
	if((file_ptr = fopen(argv[2], "r")) == NULL) {
		fprintf(stderr, "Error: can't open file \"%s\"\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	while(fgets(buffer, MAX_BUFFER_SIZE, file_ptr) != NULL)
		if(strstr(buffer, argv[1]) != NULL) {
			fprintf(stdout, "%s", buffer);
			match = true;
		}
	if(fclose(file_ptr) != 0) {
		fprintf(stderr, "Error when closing file \"%s\"\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	if(!match)
		fprintf(stdout, "No matches found\n");
	fprintf(stdout, "Program is over\n");

	return 0;
}
