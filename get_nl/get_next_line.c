/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:17:08 by tmelina           #+#    #+#             */
/*   Updated: 2020/12/19 20:03:51 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFFER_SIZE 4096

int		get_next_line(int fd, char **line)
{
	char *buffer;

	buffer = NULL;
	puts("im in");
	if (read(fd, buffer, BUFFER_SIZE)== -1)
		puts("im outtahere");
	puts(buffer);
	puts("bs");
	return (1);
}

int main(int argc, char **argv) {
	(void) argc;
	(void) argv;
	int fd;
	char **line;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (-1);
	get_next_line(fd, line);
}