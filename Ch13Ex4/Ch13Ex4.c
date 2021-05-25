/* Serial output of files contents
   filename: Ch13Ex4.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MSG "Content of the file "
#define STR_LENGTH 80
#define VALUE 3						/* quotes for file name and colon */

int main(int argc, char **argv)
{
	FILE *f_p;
	int ch;
	int i, j;
	int spaces_ctr;

	if(argc < 2) {
		fprintf(stderr, "Usage: %s first_file_name ...\n", argv[0]);
		exit(EXIT_FAILURE); 
	}
	for(i = 1; i < argc; i++) {
		if((f_p = fopen(argv[i], "r")) == NULL) {
			fprintf(stderr, "Error: can't open file \"%s\"\n", argv[i]);
			exit(EXIT_FAILURE);
		}
		spaces_ctr = STR_LENGTH - strlen(MSG) - strlen(argv[i]) - VALUE;
		for(j = 0; j < (spaces_ctr / 2); j++)
			putc(' ', stdout);
		fprintf(stdout, "%s\"%s\":\n", MSG, argv[i]);
		while((ch = getc(f_p)) != EOF)
			putc(ch, stdout);
		putc('\n', stdout);
		if(fclose(f_p) != 0) {
			fprintf(stderr, "Error when closing file \"%s\"\n", argv[i]);
			exit(EXIT_FAILURE);
		}
	}
	fputs("Program is over\n", stdout);

	return 0;
}
