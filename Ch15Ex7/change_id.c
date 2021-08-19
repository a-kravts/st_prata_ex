#include "change_id.h"
#include "definitions.h"
#include "get_uint.h"
#include <stdio.h>

void change_id(unsigned int *font_options_ptr)
{
    enum {low_limit = 0, upper_limit = 255};
    unsigned int id;

    printf("Enter font identifier from %d to %d: ", low_limit,
                                                    upper_limit);
    id = get_uint();
    while(id < low_limit || id > upper_limit) {
        printf("Error: value out of range\n"
               "Repeat input(from %d to %d): ", low_limit, upper_limit);
        id = get_uint();
    }
    *font_options_ptr &= ~mask_id; /*clear the range*/
    *font_options_ptr |= id;       /*fill the range*/
}
