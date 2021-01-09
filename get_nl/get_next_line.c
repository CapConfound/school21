/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilya <ilya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:17:08 by tmelina           #+#    #+#             */
/*   Updated: 2021/01/08 19:01:48 by ilya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFFER_SIZE 12

int		get_next_line(int fd, char **line)
{
	char buffer[BUFFER_SIZE + 1];
	int check;
	
	line = malloc(BUFFER_SIZE + 1);
	check = read(fd, buffer, BUFFER_SIZE);
	read(fd, buffer, BUFFER_SIZE);

	// while (check != -1 && buffer[ft_strlen(buffer) - 1] != '\n')
	// 	read(fd, buffer, BUFFER_SIZE);
		
	// if (== -1)
	// 	{
	// 		puts("im outtahere");
	// 		exit(1);
	// 	}
	printf("%s\n", buffer);
	return (1);
}

