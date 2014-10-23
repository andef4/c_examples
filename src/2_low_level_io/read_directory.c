#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    char* dir_name;
    if (argc == 1) {
        dir_name = ".";
    } else if (argc == 2) {
        dir_name = argv[1];
    } else {
        printf("Usage: ./read_directory [<dir>]\n");
        return 1;
    }

    char* absolute_path = realpath(dir_name, NULL);

    DIR* directory = opendir(dir_name);
    if (directory == NULL) {
        perror("Failed to open directory");
        return 1;
    }

    struct dirent* dir_entry;
    while ((dir_entry = readdir(directory)) != NULL) {
        char* file_path = malloc(sizeof(char) * (strlen(dir_entry->d_name) + strlen(absolute_path) + 2));
        strcpy(file_path, absolute_path);
        strcat(file_path, "/");
        strcat(file_path, dir_entry->d_name);
        
        struct stat file_stat;
        int ret = stat(file_path, &file_stat);
        if (ret == -1) {
            perror("File stat failed");        
            return 1;
        }
        printf("%s\n", dir_entry->d_name);
        free(file_path);
    }

    closedir(directory);
    free(absolute_path);
    return 0;
}

