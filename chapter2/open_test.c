#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main(void)
{
    int fd = open("does-not-exist.txt", O_RDONLY);

    if (fd == -1)
    {
        printf("open failed\n");
        printf("Error: %s\n", strerror(errno));
        return 1;
    }

    close(fd);

    return 0;
}