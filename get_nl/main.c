#include "get_next_line.h"

int main(int argc, const char **argv) {
	(void) argc;
	(void) argv;
	int fd;
	char **line;
	int i = 0;

	fd = open(argv[1], O_RDONLY);
	printf("here we go:");
	if (fd < 0)
		return (-1);
	while (i < 5)
	{
		/* code */
		get_next_line(fd, line);
		i++;
	}
	
	return (0);
}