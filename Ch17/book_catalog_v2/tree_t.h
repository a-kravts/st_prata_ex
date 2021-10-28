/*Declaration(s) for tree_t.c module*/
#ifndef TREE_T_H_SENTRY
#define TREE_T_H_SENTRY

#include "catalog_definitions.h"
#include <stdio.h>

typedef book_t data_t;
typedef struct node {
    data_t data;
    struct node *left, *right;
} node_t;

typedef struct tree {
    node_t *root;
    unsigned int node_counter;
} tree_t;

void initialize_tree(tree_t *tree);
unsigned int tree_is_empty(const tree_t *tree);
unsigned int tree_is_full(const tree_t *tree);
unsigned int get_nodes_number(const tree_t *tree);
int compare_titles(const data_t *first, const data_t *second);
int compare_authors(const data_t *first, const data_t *second);
int compare_pages(const data_t *first, const data_t *second);
node_t **node_search(const data_t *target, node_t **root);
static node_t *make_node(const data_t *data);
static void add_node(node_t *node, node_t **root,
                     int f1(const data_t *, const data_t *),
                     int f2(const data_t *, const data_t *));
void add_data(tree_t *tree, const data_t *data,
             int f1(const data_t *, const data_t *), 
             int f2(const data_t *, const data_t *));
static void delete_node(node_t **target);
void delete_data(tree_t *tree, const data_t *data);
static void write_nodes(const node_t *root, FILE *stream);
void write_tree(const node_t *root, const char *filename);
void read_tree(tree_t *tree, const char *filename);
void print_tree_data_in_ascending(const node_t *root);
void print_tree_data_in_descending(const node_t *root);
void sort_tree_by_author(node_t *root, tree_t *tree);
void sort_tree_by_pages(node_t *root, tree_t *tree);
static void empty_the_nodes(node_t *root);
void clear_the_tree(tree_t *tree);

#endif
