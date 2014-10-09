#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <string.h>

int main(void) {
    int fd;
    if ((fd = open("file.txt", O_WRONLY|O_CREAT|O_EXCL, S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH)) < 0) {
        perror("Error opening file");
        return 1;
    }

    const char* str = "Hello World!\n";

    write(fd, str, strlen(str));

    if (close(fd) < 0) {
        perror("Error closing file");
        return 1;
    }


    return 0;
}
