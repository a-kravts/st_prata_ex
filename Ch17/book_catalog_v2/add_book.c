#include "add_book.h"
#include "tree_t.h"
#include "catalog_definitions.h"
#include "get_data_to_add.h"
#include <stdio.h>

void add_book(const char *catalog)
{
    tree_t tree;
    data_t data;
    enum state {false, true} proceed, added = false;

    initialize_tree(&tree);
    read_tree(&tree, catalog);
    do {
        if(tree_is_full(&tree)) {
            printf("The \"%s\" catalog is full\n", catalog);
            break;
        }
        printf("There are %u/%u books in the \"%s\" catalog.\n",
            tree.node_counter, max_books, catalog);
        if((proceed = get_data_to_add(&data, &tree.root))) {
            add_data(&tree, &data, compare_titles, compare_authors);
            added = true;
        }
    } while(proceed);
    if(added)
        write_tree(tree.root, catalog);
    clear_the_tree(&tree);
}
