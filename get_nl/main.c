#include "get_next_line.h"

int main(int argc, const char **argv) {
	(void) argc;
	(void) argv;
	int fd;
	char **line;
	char *filename_str = (char *)argv[1];
	int i = 0;
	if ((fd = open(filename_str, O_RDONLY)) == -1)
	{
		puts("\nOi, mate. Feels loik rong foilnaem innit?\n");
		exit (1);
	}
	printf("here we go:\n--------\n\n");
	if (fd < 0)
		return (-1);
	while (i < 6)
	{
		/* code */
		
		printf("%d:", i);
		get_next_line(fd, line);
		i++;
	}
	
	return (0);
}