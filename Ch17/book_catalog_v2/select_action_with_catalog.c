#include "select_action_with_catalog.h"
#include "get_char_choice.h"
#include "show_action_menu.h"
#define EXIT_CHAR 'e'

void select_action_with_catalog(const char *name)
{
    char ch, *choices = "die";

    do {
        show_action_menu();
        ch = get_char_choice(choices);
        switch(ch) {
//            case 'd': display_catalog_contents(name); break;
//            case 'i': edit_catalog_contents(name);    break;
        }
    } while(ch != EXIT_CHAR);
}
