#include "change_size.h"
#include "definitions.h"
#include "get_uint.h"
#include <stdio.h>

void change_size(unsigned int *font_options_ptr)
{
    enum {low_limit = 0, upper_limit = 127};
    unsigned int size;

    printf("Enter font size from %d to %d: ", low_limit, upper_limit);
    size = get_uint();
    while(size < low_limit || size > upper_limit) {
        printf("Error: value out of range\n"
               "Repeat input(from %d to %d): ", low_limit, upper_limit);
        size = get_uint();
    }
    *font_options_ptr &= ~mask_size; /*clear the range*/
    size <<= shifts_size;            /*shift to the range*/
    *font_options_ptr |= size;       /*fill the range*/
}
