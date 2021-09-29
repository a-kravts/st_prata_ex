#include "get_catalog_list.h"
#include "catalog_definitions.h"
#include "get_directory_stream.h"
#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

list_t get_catalog_list()
{
    char *file_suffix;
    struct dirent *entry;
    list_t list;
    DIR *directory = get_directory_stream();

    initialize_list(&list);
    errno = 0;
    while((entry = readdir(directory))) {
        file_suffix = strchr(entry->d_name, '\0') - strlen(catalog_suffix); 
        if(!strcmp(file_suffix, catalog_suffix)) {
           add_item(entry->d_name, &list); 
        }
    }
    if(errno) {
        perror("readdir");
        exit(EXIT_FAILURE);
    }
    if(closedir(directory)) {
        perror("closedir");
        exit(EXIT_FAILURE);
    }

    return list;
}
