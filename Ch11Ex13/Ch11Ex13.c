/* Repeat arguments of command line in reverse order
   filename: Ch11Ex13.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc < 2)
		printf("No arguments");
	else
		for(argc--; argc; argc--)
			printf("%s ", argv[argc]);
	putchar('\n');
	
	return 0;
}
