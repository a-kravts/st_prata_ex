/* Rough conversion of digital representation into image
   filename: Ch13Ex12.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "mk_file_with_random_int.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "image_1"
#define ROWS 20
#define COLUMNS 30
#define VALUE_0 ' ' /* values to convert */
#define VALUE_1 '.'
#define VALUE_2 '\''
#define VALUE_3 ':'
#define VALUE_4 '~'
#define VALUE_5 '+'
#define VALUE_6 '='
#define VALUE_7 '%'
#define VALUE_8 '&'
#define VALUE_9 '#'

int main(int argc, char **argv)
{
	FILE *file_ptr;
	char converted_file_name[strlen(FILE_NAME) + strlen(".conv") + 1];
	int representation[ROWS][COLUMNS];
	char image[ROWS][COLUMNS + 1];		/* +1 for '\0' */
	int i, j;							/* indexes for loops */

	mk_file_with_random_int(FILE_NAME, ROWS, COLUMNS);

	if((file_ptr = fopen(FILE_NAME, "r")) == NULL) {
		fprintf(stderr, "Error: can't open file \"%s\"\n", FILE_NAME);
		exit(EXIT_FAILURE);
	}
	for(i = 0; i < ROWS; i++) {
		for(j = 0; j < COLUMNS; j++) {
			if(fscanf(file_ptr, "%d", &representation[i][j]) != 1) {
				fprintf(stderr, "Error: can't read numbers from \"%s\"\n",
					FILE_NAME);
				exit(EXIT_FAILURE);
			}
		}
	}
	if(fclose(file_ptr) != 0) {
		fprintf(stderr, "Error when closing file \"%s\"\n", FILE_NAME);
		exit(EXIT_FAILURE);
	}

	for(i = 0; i < ROWS; i++) {
		for(j = 0; j < COLUMNS; j++) {
			if(representation[i][j] == 0)
				image[i][j] = VALUE_0;
			else if(representation[i][j] == 1)
				image[i][j] = VALUE_1;
			else if(representation[i][j] == 2)
				image[i][j] = VALUE_2;
			else if(representation[i][j] == 3)
				image[i][j] = VALUE_3;
			else if(representation[i][j] == 4)
				image[i][j] = VALUE_4;
			else if(representation[i][j] == 5)
				image[i][j] = VALUE_5;
			else if(representation[i][j] == 6)
				image[i][j] = VALUE_6;
			else if(representation[i][j] == 7)
				image[i][j] = VALUE_7;
			else if(representation[i][j] == 8)
				image[i][j] = VALUE_8;
			else if(representation[i][j] == 9)
				image[i][j] = VALUE_9;
		}
		image[i][j] = '\0';
	}

	for(i = 0; i < ROWS; i++)
		fprintf(stdout, "%s\n", image[i]);

	strcpy(converted_file_name, FILE_NAME);
	strcat(converted_file_name, ".conv");
	if((file_ptr = fopen(converted_file_name, "w")) == NULL) {
		fprintf(stderr, "Error: can't open file \"%s\"\n",
			converted_file_name);
		exit(EXIT_FAILURE);
	}
	for(i = 0; i < ROWS; i++)
		fprintf(file_ptr, "%s\n", image[i]);
	if(fclose(file_ptr) != 0) {
		fprintf(stderr, "Error when closing file \"%s\"\n",
			converted_file_name);
		exit(EXIT_FAILURE);
	}

	fprintf(stdout, "Program is over\n");

	return 0;
}
