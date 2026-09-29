#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int next_option;

    const char *short_options = "ho:v";

    const struct option long_options[] = {
        {"help",    0, NULL, 'h'},
        {"output",  1, NULL, 'o'},
        {"verbose", 0, NULL, 'v'},
        {NULL,      0, NULL,  0}
    };

    /* Chỉ gọi getopt_long trong điều kiện lặp */
    while ((next_option = getopt_long(argc, argv, short_options, long_options, NULL)) != -1)
    {
        switch (next_option)
        {
            case 'h':
                printf("Help requested\n");
                break;

            case 'v':
                printf("Verbose enabled\n");
                break;

            case 'o':
                printf("Output file: %s\n", optarg);
                break;

            default:
            printf("Unknown option\n");
            break;
        }
    }

    return 0;
}