/* Adding words to the "FILE_NAME" file
   filename: Ch13Ex9.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 41
#define EXIT_CHAR '#'
#define FILE_NAME "words"

int main(void)
{
	FILE *f_p;
	char word[MAX_LENGTH];
	int ch;
	int count;

	if((f_p = fopen(FILE_NAME, "a+")) == NULL) {
		fprintf(stderr, "Error: can't open file \"%s\"\n", FILE_NAME);
		exit(EXIT_FAILURE);
	}
	fseek(f_p, 0L, SEEK_END);
	if(ftell(f_p) == 0)							/* when a new file is opened */
		count = 1;
	else {
		fseek(f_p, -2L, SEEK_END);				/* for skip "\nEOF" */
		while((ch = getc(f_p)) != '\n') {
			if(fseek(f_p, -2L, SEEK_CUR) != 0) {/* when reached the beginning */
				fseek(f_p, -1L, SEEK_CUR);		/* of the file, if it contains*/
				break;							/* only 1 word */
			}
		}
		if(fscanf(f_p, "%d", &count) != 1) {
			fprintf(stderr, "Error: can't read last number in the \"%s\"\n",
				FILE_NAME);
			exit(EXIT_FAILURE);
		}
		count++;
	}
	fprintf(stdout, "Enter word up to %d character('%c' to exit)\n",
		MAX_LENGTH, EXIT_CHAR);
	while(fscanf(stdin, "%40s", word) == 1 && word[0] != EXIT_CHAR) {
		fprintf(f_p, "%d %s\n", count, word);
		count++;
	}
	fprintf(stdout, "\nFile \"%s\" contents:\n", FILE_NAME);
	rewind(f_p);
	while(fscanf(f_p, "%d %40s", &count, word) == 2)
		fprintf(stdout, "%d %s\n", count, word);
	if(fclose(f_p) != 0) {
		fprintf(stderr, "Error when closing file \"%s\"\n", FILE_NAME);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "Program is over\n");

	return 0;
}
