#include "bstr_to_decimal.h"

int bstr_to_decimal(const char *b_str, int str_length)
{
    int current_bit = 1, result = 0;

    str_length -= 1; /*index of lowest bit*/
    for(; str_length >= 0; str_length--) {
        if(b_str[str_length] == '1')
            result |= current_bit;
        current_bit <<= 1;
    }
    return result;
}
