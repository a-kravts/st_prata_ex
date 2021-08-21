#include "change_alignment.h"
#include "definitions.h"
#include "show_alignment_options.h"
#include "get_char_choice.h"
#define EXIT_CHAR 'e'

void change_alignment(unsigned int *font_options_ptr)
{
    char ch;
    unsigned int alignment; 
    const char alignment_choices[] = "lcre";
    enum {left, center, right};

    show_alignment_options();
    ch = get_char_choice(alignment_choices);
    if(ch != EXIT_CHAR) {
        switch(ch) {
            case 'l': alignment = left;   break;
            case 'c': alignment = center; break;
            case 'r': alignment = right;  break;
        }
        *font_options_ptr &= ~mask_alignment; /*clear the range*/
        alignment <<= shifts_alignment;       /*shift to the range*/
        *font_options_ptr |= alignment;       /*fill the range*/
    }
}
