#include "rotate_uint.h"
#include <limits.h>

int rotate_uint(unsigned int number, int number_of_shifts)
{
    unsigned int tmp_value;
    int int_size = sizeof(int) * CHAR_BIT;

    while(number_of_shifts > 0) {
        tmp_value = number >> (int_size - 1); /*highest bit to lowest*/ 
        number <<= 1;
        number |= tmp_value;
        number_of_shifts--;
    }
    return number;
}
