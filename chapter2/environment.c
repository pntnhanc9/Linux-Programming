#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *home = getenv("HOME");

    printf("HOME = %s\n", home);

    return 0;
}