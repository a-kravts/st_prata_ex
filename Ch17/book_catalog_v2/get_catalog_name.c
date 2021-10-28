#include "get_catalog_name.h"
#include "catalog_definitions.h"
#include "get_str.h"
#include <string.h>
#include <stdio.h>
#define QUIT_CHAR '\0'

int get_catalog_name(char *catalog)
{
    int limit = max_catalog_name - strlen(catalog_suffix);

    printf("Enter a new catalog name(up to %d characters) or press "
           "[enter]\nat the beginning of the line to quit: ", limit);
    get_str(catalog, limit);
    if(*catalog == QUIT_CHAR)
        return 0;
    strcat(catalog, catalog_suffix);

    return 1;
}
