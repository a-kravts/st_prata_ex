/* Copy files
   filename: Ch13Ex2.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	FILE *src, *dest;
	int ch;

	if(argc < 3) {
		fprintf(stderr, "Usage: %s source_file destination_file\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if((src = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Error: can't open file \"%s\"\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if((dest = fopen(argv[2], "wx")) == NULL) {
		fprintf(stderr, "Error: can't open file \"%s\"\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	while((ch = getc(src)) != EOF)
		putc(ch, dest);
	if(fclose(src) != 0 || fclose(dest) != 0)
		fprintf(stderr, "Error when closing files\n");

	return 0;
}
