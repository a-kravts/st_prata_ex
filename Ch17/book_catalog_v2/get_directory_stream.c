#include "get_directory_stream.h"
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

DIR *get_directory_stream()
{
    char *path = getcwd(NULL, 0);
    DIR *directory = opendir(path);

    if(directory) {
        free(path);
        return directory;
    } else {
        perror("opendir");
        exit(EXIT_FAILURE);
    }
}
