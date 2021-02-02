#include "get_next_line.h"

int main(int argc, const char **argv) {
    (void) argc;
    (void) argv;
    int fd;
    int c;
    char *line;
    int i = 1;
    char *filename_str = (char *)argv[1];

    c = 0;
    if ((fd = open(filename_str, O_RDONLY)) == -1)
    {
        puts("\nOi, mate. Feels loik rong foilnaem innit?\n");
        exit (1);
    }
    printf("here we go:\n--------\n");
    if (fd < 0)
        return (-1);
    //line = malloc(500*sizeof(char));
    // while (c != -1)
    while((c = get_next_line(fd, &line)) && i < 10)
    {

        printf("line #%d: %s\n", i, line);

        printf("gn - %d\n", c);
        i++;
    }
    printf("gn - %d\n", c);
    printf("--------\n");

    return (0);
}