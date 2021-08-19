#include "change_italic.h"
#include "definitions.h"

void change_italic(unsigned int *font_options_ptr)
{
    /*Enable if disabled and vice versa*/
    *font_options_ptr ^= mask_italic;
}
