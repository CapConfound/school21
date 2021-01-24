#include "get_next_line.h"

int main(int argc, const char **argv) {
    (void) argc;
    (void) argv;
    int fd;
    int c;
    char **line;
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
    line = malloc(500*sizeof(char));
    // while (c != -1)
    for(int j = 0; j< 10; j++)
    {
        printf("line %d:\n", i);
        c = get_next_line(fd, line);
        printf("\ngnl - %d\n", c);
        i++;
    }

    return (0);
}