#include "delete_book.h"
#include "tree_t.h"
#include "get_data_to_delete.h"
#include "catalog_definitions.h"
#include <stdio.h>

void delete_book(const char *catalog)
{
    tree_t tree;
    data_t data;
    enum state {false, true} proceed, deleted = false;

    initialize_tree(&tree);
    read_tree(&tree, catalog);
    do {
        if(tree_is_empty(&tree)) {
            printf("The \"%s\" catalog is empty\n", catalog);
            break;
        }
        printf("There are %u/%u books in the \"%s\" catalog.\n",
            tree.node_counter, max_books, catalog);
        if((proceed = get_data_to_delete(&data, &tree.root))) {
            delete_data(&tree, &data);
            deleted = true;
        }
    } while(proceed);
    if(deleted)
        write_tree(tree.root, catalog);
    clear_the_tree(&tree);
}
