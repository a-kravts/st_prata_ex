/*  Applying the operations '~', '&', '|' and '^' to CL arguments
    filename: Ch15Ex2.c
    ver 1.0
    Aleksandr Kravtsov  */
#include "check_bstr.h"
#include "bstr_to_int.h"
#include "int_to_bstr.h"
#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv)
{
    const int int_size = sizeof(int) * CHAR_BIT;
    const int str_limit = int_size + 1;
    char b_str[str_limit];
    int arg1, arg2;

    if(argc != 3) {
        printf("Usage: %s first_bstr second_bstr\n", argv[0]);
        return 1;
    }
    if(check_bstr(argv[1], str_limit) || check_bstr(argv[2], str_limit)) {
        printf("Error: invalid arguments\n");
        return 2;
    }
    arg1 = bstr_to_int(argv[1]);
    int_to_bstr(~arg1, b_str, int_size);
    printf("~ %32s\n= %32s\n\n", argv[1], b_str);

    arg2 = bstr_to_int(argv[2]);
    int_to_bstr(~arg2, b_str, int_size);
    printf("~ %32s\n= %32s\n\n", argv[2], b_str);

    int_to_bstr(arg1 & arg2, b_str, int_size);
    printf("  %32s\n& %32s\n= %32s\n\n", argv[1], argv[2], b_str);
 
    int_to_bstr(arg1 | arg2, b_str, int_size);
    printf("  %32s\n| %32s\n= %32s\n\n", argv[1], argv[2], b_str);
 
    int_to_bstr(arg1 ^ arg2, b_str, int_size);
    printf("  %32s\n^ %32s\n= %32s\n\n", argv[1], argv[2], b_str);

    return 0;
}
