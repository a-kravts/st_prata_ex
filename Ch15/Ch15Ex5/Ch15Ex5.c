/*  Rotating the bits of an unsigned integer
    filename: Ch15Ex5.c
    ver 1.0
    Aleksandr Kravtsov  */
#include "rotate_uint.h"
#include "int_to_bstr.h"
#include "bstr_to_int.h"
#include "check_bstr.h"
#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include <limits.h>

int main(int argc, char **argv)
{
    unsigned int number, number_of_shifts;
    int int_size = CHAR_BIT * sizeof(int);
    int str_limit = int_size + 1;
    char b_number[str_limit];
    char *end_argv2; /*for strtoumax*/

    if(argc != 3) {
        fprintf(stderr, "Usage: %s binary_str number_of_shifts\n",
                argv[0]);
        return 1;
    }
    /*checking the first argument*/
    if(check_bstr(argv[1], str_limit)) {
        fprintf(stderr, "Incorrect argument: \"%s\"\n", argv[1]);
        return 1;
    }
    number = bstr_to_int(argv[1]);
    /*checking the second argument*/
    end_argv2 = strchr(argv[2], '\0');
    number_of_shifts = strtoumax(argv[2], &end_argv2, 10);
    if(!number_of_shifts || number_of_shifts > int_size) {
        fprintf(stderr, "Incorrect argument: \"%s\"\n", argv[2]);
        return 1;
    }
    number = rotate_uint(number, number_of_shifts);
    int_to_bstr(number, b_number, int_size);
    printf("%s\n", b_number);

    return 0;
}
