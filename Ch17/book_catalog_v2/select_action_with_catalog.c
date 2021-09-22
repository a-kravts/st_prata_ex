#include "select_action_with_catalog.h"
#include "get_char_choice.h"
#include "show_action_menu.h"
#define EXIT_CHAR 'e'

void select_action_with_catalog(const char *name)
{
    char ch, *choices = "sde";

    do {
        show_action_menu();
        ch = get_char_choice(choices);
        switch(ch) {
//            case 's': show_catalog(name); break;
//            case 'd': edit_catalog(name); break;
        }
    } while(ch != EXIT_CHAR);
}
