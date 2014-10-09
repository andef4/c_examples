#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: ./read_file filename.txt\n");
        return 1;
    }

    int fd;
    if ((fd = open(argv[1], O_RDONLY)) < 0) {
        perror("Error opening file");
        return 1;
    }

    struct stat file_stat;
    fstat(fd, &file_stat);

    char* buf = malloc(sizeof(char) * file_stat.st_size);
    if (read(fd, buf, file_stat.st_size) < 0) {
        perror("Error reading file");
        return 1;
    }

    for (int i = 0; i < file_stat.st_size; i++) {
        if (i % 16 == 0) {
            printf("\n");
            printf("%08x", i);
        }
        if (i % 2 == 0) {
            printf(" ");
        }
        printf("%02x", buf[i]);
    }


    if (close(fd) < 0) {
        perror("Error closing file");
        return 1;
    }


    return 0;
}
