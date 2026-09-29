#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    char filename[] = "/tmp/myfile.XXXXXX";

    int fd = mkstemp(filename);

    printf("Temporary file: %s\n", filename);

    unlink(filename);

    printf("File unlinked\n");

    close(fd);

    printf("File closed\n");

    return 0;
}