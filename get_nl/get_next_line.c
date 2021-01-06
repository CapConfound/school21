/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilya <ilya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:17:08 by tmelina           #+#    #+#             */
/*   Updated: 2021/01/06 22:38:30 by ilya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFFER_SIZE 1

int		get_next_line(int fd, char **line)
{
	char buffer[BUFFER_SIZE + 1];
	int check;
	
	line = malloc(BUFFER_SIZE + 1);
	check = read(fd, *line++, BUFFER_SIZE);
	while (check != -1 || **line != '\n')
	{
		read(fd, *line++, BUFFER_SIZE);
		write(1, &**line, 1);
	}
	line++;
		
	// if (== -1)
	// 	{
	// 		puts("im outtahere");
	// 		exit(1);
	// 	}
	// printf("buffer: %s\n-----", buffer);
	return (1);
}

