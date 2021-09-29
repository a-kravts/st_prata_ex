/*Declaration(s) for list_t.c module*/
#ifndef LIST_T_H_SENTRY
#define LIST_T_H_SENTRY

typedef char * data_t;

typedef struct item {
    data_t data;
    struct item *next;
} item_t;

typedef item_t * list_t;

void initialize_list(list_t *plist);
void add_item(const data_t name, list_t *list);
void print_list_data(list_t list);
void empty_the_list(list_t list);
data_t search_in_list(const data_t target, list_t list);

#endif
