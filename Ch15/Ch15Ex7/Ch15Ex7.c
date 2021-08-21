/*  Changing and displaying font options 
    filename: Ch15Ex7.c
    ver 1.0
    Aleksandr Kravtsov  */
#include "print_font_options.h"
#include "show_font_options.h"
#include "get_char_choice.h"
#include "change_id.h"
#include "change_size.h"
#include "change_alignment.h"
#include "change_bold.h"
#include "change_italic.h"
#include "change_underline.h"
#define EXIT_CHAR 'e'

int main(void)
{
    unsigned int font_options = 0;
    const char choices[] = "isabtue";
    char ch;

    do {
        print_font_options(font_options);
        show_font_options();
        ch = get_char_choice(choices);
        switch(ch) {
            case 'i': change_id(&font_options);        break;
            case 's': change_size(&font_options);      break;
            case 'a': change_alignment(&font_options); break;
            case 'b': change_bold(&font_options);      break;
            case 't': change_italic(&font_options);    break;
            case 'u': change_underline(&font_options); break;
        }
    } while(ch != EXIT_CHAR);

    return 0;
}
