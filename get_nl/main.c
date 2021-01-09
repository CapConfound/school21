#include "get_next_line.h"

// void custom_test(int fd, char **line)
// {
	
// 	char *lineadress[66];
// 	int i = 0;
// 	int j = 1;

// 	while ((i = get_next_line(fd, &line)) > 0)
// 	{
// 		/* code */
		
// 		printf("|%s\n", line);
// 		lineadress[j - 1] = line;
// 		j++;
// 	}
// 	printf("|%s\n", line);
// 	free(line);
// 	close(fd);

// 	if (i == -1)
// 		printf ("\nError in Fonction - Returned -1\n");
// 	else if (j == 66)
// 		printf("\nRight number of lines\n");
// 	else if (j != 66)
// 		printf("\nNot Good - Wrong Number Of Lines\n");
// 	while (--j > 0)
// 		free(lineadress[j - 1]);
// 	j = 1;
// }

int main(int argc, const char **argv) {
    (void) argc;
    (void) argv;
    int fd;
    char *line = 0;
    int i = 0;
    char *filename_str = (char *)argv[1];
    
    if ((fd = open(filename_str, O_RDONLY)) == -1)
    {
        puts("\nOi, mate. Feels loik rong foilnaem innit?\n");
        exit (1);
    }
    printf("here we go:\n--------\n");
    if (fd < 0)
        return (-1);
    
    while (i < 6)
    {
        /* code */
        printf("run %d:", i);
        get_next_line(fd, &line);
        i++;
    }

    return (0);
}