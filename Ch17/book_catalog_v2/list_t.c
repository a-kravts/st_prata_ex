/*Functions for working with list_t*/
#include "list_t.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void initializes_list(list_t *plist)
{
    *plist = NULL;
}
/*************************************************************************/
void add_item(const data_t name, list_t *plist)
{
    item_t *new;
    list_t list = *plist;

    new = (item_t *)malloc(sizeof(item_t));
    if(!new) {
        printf("Error: no memory allocated\n");
        exit(EXIT_FAILURE);
    }
    new->data = (char *)malloc(strlen(name) + 1);
    if(!new->data) {
        printf("Error: no memory allocated\n");
        exit(EXIT_FAILURE);
    }
    strcpy(new->data, name);
    new->next = NULL;
    if(list) {
        while(list->next) {
            list = list->next;
        }
        list->next = new;
    } else {
        *plist = new;
    }
}
/*************************************************************************/
void print_list_data(list_t list)
{
    printf("Catalog names:\n");
    while(list) {
        printf("%s\n", list->data);
        list = list->next;
    }
}
/*************************************************************************/
void empty_the_list(list_t list)
{
    if(!list)
        return;
    empty_the_list(list->next);
    free(list->data);
    free(list);
}
/*************************************************************************/
data_t search_in_list(const data_t target, list_t list)
{
    while(list) {
        if(!strcmp(target, list->data)) {
            return list->data;
        }
        list = list->next;
    }

    return NULL;
}
