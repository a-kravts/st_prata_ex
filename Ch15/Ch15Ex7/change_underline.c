#include "change_underline.h"
#include "definitions.h"

void change_underline(unsigned int *font_options_ptr)
{
    /*Enable if disabled and vice versa*/
    *font_options_ptr ^= mask_underline;
}
