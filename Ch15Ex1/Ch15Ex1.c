/*  Converting a string with a binary representation of a number to decimal
    filename: Ch15Ex1.c
    ver 1.0
    Aleksandr Kravtsov  */
#include "get_str.h"
#include "bstr_to_decimal.h"
#include "check_bstr.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(void)
{
    const int str_limit = sizeof(int) * CHAR_BIT + 1;
    char b_str[str_limit];
    int number;

    printf("Enter a binary representation of a number "
           "up to %d characters\n(EOF to exit): ", str_limit - 1);
    while(get_str(b_str, str_limit)) {
        if(check_bstr(b_str)) {
            printf("Invalid input. Try again: ");
            continue;
        }
        number = bstr_to_decimal(b_str, strlen(b_str));
        printf("Decimal representation = %d\n\n", number);
        printf("Enter a binary representation of a number "
               "up to %d characters\n(EOF to exit): ", str_limit - 1);
    }
    return 0;
}
