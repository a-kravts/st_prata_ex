#include "change_bold.h"
#include "definitions.h"

void change_bold(unsigned int *font_options_ptr)
{
    /*Enable if disabled and vice versa*/
    *font_options_ptr ^= mask_bold;
}
