#include "catalog_exists.h"
#include "catalog_definitions.h"
#include "get_directory_stream.h"
#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int catalog_exists()
{
    char *file_suffix;
    struct dirent *entry;
    DIR *directory = get_directory_stream();

    errno = 0;
    while((entry = readdir(directory))) {
        file_suffix = strchr(entry->d_name, '\0') - strlen(catalog_suffix); 
        if(!strcmp(file_suffix, catalog_suffix)) {
            return 1;
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

    return 0;
}
