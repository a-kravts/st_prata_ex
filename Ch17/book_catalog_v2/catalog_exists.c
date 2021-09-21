#include "catalog_exists.h"
#include "catalog_definitions.h"
#include <dirent.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int catalog_exists()
{
    char *file_suffix;
    struct dirent *entry;
    char *path = getcwd(NULL, 0);
    DIR *directory = opendir(path);

    if(directory != NULL) {
        free(path);
        errno = 0;
        while((entry = readdir(directory)) != NULL) {
            file_suffix =
                strchr(entry->d_name, '\0') - strlen(catalog_suffix); 
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
    } else {
        perror("opendir");
        exit(EXIT_FAILURE);
    }

    return 0;
}
