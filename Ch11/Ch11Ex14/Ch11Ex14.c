/* Raising a double to a power
   filename: Ch11Ex14.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	double first_arg;
	long second_arg;
	double result = 1.0;
	long i = 0;
	char *end_first_arg;
	char *end_second_arg;
	
	if(argc < 3) {
		printf("Error 1: too few arguments\n");
		return 1;
	}
	end_first_arg = argv[1] + strlen(argv[1]);
	if((first_arg = strtod(argv[1], &end_first_arg))) {
		end_second_arg = argv[2] + strlen(argv[2]);
		if((second_arg = strtol(argv[2], &end_second_arg, 10))) {
			for(; i < second_arg; i++)
				result *= first_arg;
			printf("%.2lf to the %ld power = %.2lf\n", first_arg, second_arg,
													   result);
			return 0;
		}
		printf("Error 3: second argument is not of type integer\n");
		return 3;
	}
	printf("Error 2: first argument is not of type double\n");
	return 2;
}
