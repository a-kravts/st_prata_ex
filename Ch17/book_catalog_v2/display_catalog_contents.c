#include "display_catalog_contents.h"
#include "get_char_choice.h"
#include "show_display_menu.h"
#include "show_order_menu.h"
#include "tree_t.h"
#include <stdio.h>
#define EXIT_CHAR 'e'

void display_catalog_contents(const char *catalog)
{
    char ch1, ch2, *choices1 = "tape", *choices2 = "ad";
    tree_t tree, tmp_tree;

    initialize_tree(&tree);
    initialize_tree(&tmp_tree);
    read_tree(&tree, catalog);
    if(tree_is_empty(&tree)) {
        printf("The \"%s\" catalog is empty\n", catalog);
        return;
    }
    do {
        show_display_menu();
        ch1 = get_char_choice(choices1);
        switch(ch1) {
            case 't': tmp_tree.root = tree.root;                 break;
            case 'a': sort_tree_by_author(tree.root, &tmp_tree); break;
            case 'p': sort_tree_by_pages(tree.root, &tmp_tree);  break;
        }
        if(ch1 != EXIT_CHAR) {
            show_order_menu();
            ch2 = get_char_choice(choices2);
            printf("Contents of the \"%s\":\n", catalog);
            switch(ch2) {
                case 'a':
                    print_tree_data_in_ascending(tmp_tree.root);  break;
                case 'd':
                    print_tree_data_in_descending(tmp_tree.root); break;
            }
        }
        (ch1 != 't')? clear_the_tree(&tmp_tree) : (tmp_tree.root = NULL);
    } while(ch1 != EXIT_CHAR);
    clear_the_tree(&tree);
}
