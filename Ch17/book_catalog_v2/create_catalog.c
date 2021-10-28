#include "create_catalog.h"
#include "get_catalog_name.h"
#include "catalog_definitions.h"
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

void create_catalog()
{
    char catalog[max_catalog_name];
    FILE *stream;
    enum state {false, true} repeat;

    do {
        if(!get_catalog_name(catalog))
            return;
        repeat = false;
        errno = 0;
        stream = fopen(catalog, "wx");
        if(errno == EEXIST) {
            printf("This catalog name is already in use.\n");
            repeat = true;
        }
    } while(repeat);
    if(!stream) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }
    if(fclose(stream)) {
        perror("fclose");
        exit(EXIT_FAILURE);
    }
}
