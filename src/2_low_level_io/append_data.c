#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <time.h>

#include <stdio.h>
#include <string.h>

#define N 5


int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: ./append_data filename.txt\n");
        return 1;
    }

    int fd;
    if ((fd = open(argv[1], O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR)) < 0) {
        perror("Error opening file");
        return 1;
    }

    time_t time_raw = time(NULL);
    for (int i = 0; i < N; i++) {
        struct tm* time_local = localtime(&time_raw);
        const char* time_str = asctime(time_local);
        write(fd, time_str, strlen(time_str));
        time_raw += 1;
    }

    if (close(fd) < 0) {
        perror("Error closing file");
        return 1;
    }
    return 0;
}
