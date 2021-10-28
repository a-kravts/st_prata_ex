#include "tree_t.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*************************************************************************/
void initialize_tree(tree_t *tree)
{
    tree->root = NULL;
    tree->node_counter = 0;
}
/*************************************************************************/
unsigned int tree_is_empty(const tree_t *tree)
{
    return !tree->root;
}
/*************************************************************************/
unsigned int tree_is_full(const tree_t *tree)
{
    return tree->node_counter == max_books;
}
/*************************************************************************/
unsigned int get_nodes_number(const tree_t *tree)
{
    return tree->node_counter;
}
/*************************************************************************/
static node_t *make_node(const data_t *data)
{
    node_t *node;

    node = (node_t *)malloc(sizeof(node_t));
    if(!node) {
        printf("Error: no memory allocated\n");
        exit(EXIT_FAILURE);
    }
    strcpy(node->data.title, data->title);
    strcpy(node->data.author, data->author);
    node->data.pages = data->pages;
    node->left = NULL;
    node->right = NULL;

    return node;
}
/*************************************************************************/
static void add_node(node_t *node, node_t **root,
                     int f1(const data_t *, const data_t *),
                     int f2(const data_t *, const data_t *))
{
    int cmp1, cmp2;

    if(!*root) {
        *root = node;
        return;
    }
    cmp1 = f1(&node->data, &(*root)->data);
    cmp2 = f2(&node->data, &(*root)->data);

    if(cmp1 < 0 || (!cmp1 && cmp2 < 0))
        add_node(node, &(*root)->left, f1, f2);
    else
        add_node(node, &(*root)->right, f1, f2);
}
/*************************************************************************/
void add_data(tree_t *tree, const data_t *data,
             int f1(const data_t *, const data_t *), 
             int f2(const data_t *, const data_t *))
{
    node_t *node;

    node = make_node(data);
    add_node(node, &tree->root, f1, f2);
    tree->node_counter++;
}
/*************************************************************************/
int compare_titles(const data_t *first, const data_t *second)
{
    return strcmp(first->title, second->title);
}
/*************************************************************************/
int compare_authors(const data_t *first, const data_t *second)
{
    return strcmp(first->author, second->author);
}
/*************************************************************************/
int compare_pages(const data_t *first, const data_t *second)
{
    int cmp;

    if(first->pages == second->pages) {
        cmp = compare_titles(first, second);
        if(cmp) { /*titles don't match*/
            return cmp;
        } else {
            return compare_authors(first, second);
        }
    } else if(first->pages < second->pages) {
        return -1;
    } else {
        return 1;
    }
}
/*************************************************************************/
node_t **node_search(const data_t *target, node_t **root)
{
    int cmp1, cmp2;

    while(*root) {
        cmp1 = compare_titles(target, &(*root)->data);
        cmp2 = compare_authors(target, &(*root)->data);

        if(!cmp1 && !cmp2) { /*if titles and authors matched*/
            return root;
        } else if(cmp1 < 0 || (!cmp1 && cmp2 < 0)) {
            root = &(*root)->left;
        } else {
            root = &(*root)->right;
        }
    }
    return NULL;
}
/*************************************************************************/
static void delete_node(node_t **target)
{
    node_t *tmp;

    if(!(*target)->left) {         /*left node is missing*/
        tmp = *target;
        *target = (*target)->right;
        free(tmp);
    } else if(!(*target)->right) { /*right node is missing*/
        tmp = *target;
        *target = (*target)->left;
        free(tmp);
    } else {                       /*both nodes are present*/
        tmp = (*target)->left;
        while(tmp->right)
            tmp = tmp->right;
        tmp->right = (*target)->right;
        tmp = *target;
        *target = (*target)->left;
        free(tmp);
    }
}
/*************************************************************************/
void delete_data(tree_t *tree, const data_t *data)
{
    node_t **target;

    target = node_search(data, &tree->root);
    delete_node(target);
    tree->node_counter--;
}
/*************************************************************************/
static void write_nodes(const node_t *root, FILE *stream)
{
    int written;

    if(!root)
        return;
    written = fwrite(&root->data, sizeof(data_t), 1, stream);
    if(!written) {
        perror("fwrite");
        exit(EXIT_FAILURE);
    }
    write_nodes(root->left, stream);
    write_nodes(root->right, stream);
}
/*************************************************************************/
void write_tree(const node_t *root, const char *filename)
{
    FILE *stream = fopen(filename, "w");

    if(!stream) {
       perror("fopen");
       exit(EXIT_FAILURE);
    }
    write_nodes(root, stream);

    if(fclose(stream)) {
        perror("fclose");
        exit(EXIT_FAILURE);
    }
}
/*************************************************************************/
void read_tree(tree_t *tree, const char *filename)
{
    data_t data;
    FILE *stream = fopen(filename, "r");

    if(!stream) {
       perror("fopen");
       exit(EXIT_FAILURE);
    }
    while(fread(&data, sizeof(data_t), 1, stream))
        add_data(tree, &data, compare_titles, compare_authors);
    if(ferror(stream)) {
        perror("ferror");
        exit(EXIT_FAILURE);
    }
    if(fclose(stream)) {
        perror("fclose");
        exit(EXIT_FAILURE);
    }
}
/*************************************************************************/
void print_tree_data_in_ascending(const node_t *root)
{
    if(!root)
        return;
    print_tree_data_in_ascending(root->left);
    printf("\"%s\" by author %s, %lu page(s)\n", root->data.title,
                                                 root->data.author,
                                                 root->data.pages);
    print_tree_data_in_ascending(root->right);
}
/*************************************************************************/
void print_tree_data_in_descending(const node_t *root)
{
    if(!root)
        return;
    print_tree_data_in_descending(root->right);
    printf("\"%s\" by author %s, %lu page(s)\n", root->data.title,
                                                 root->data.author,
                                                 root->data.pages);
    print_tree_data_in_descending(root->left);
}
/*************************************************************************/
void sort_tree_by_author(node_t *root, tree_t *tree)
{
    if(!root)
        return;
    add_data(tree, &root->data, compare_authors, compare_titles);
    sort_tree_by_author(root->left, tree);
    sort_tree_by_author(root->right, tree);
}
/*************************************************************************/
void sort_tree_by_pages(node_t *root, tree_t *tree)
{
    if(!root)
        return;
    add_data(tree, &root->data, compare_pages, compare_titles);
    sort_tree_by_pages(root->left, tree);
    sort_tree_by_pages(root->right, tree);
}
/*************************************************************************/
static void empty_the_nodes(node_t *root)
{ 
    node_t *tmp;

    if(!root)
        return;
    tmp = root->right;
    empty_the_nodes(root->left);
    free(root);
    empty_the_nodes(tmp);
}
/*************************************************************************/
void clear_the_tree(tree_t *tree)
{
    empty_the_nodes(tree->root);
    initialize_tree(tree);
}
/*************************************************************************/
