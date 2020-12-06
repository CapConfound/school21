/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:17:08 by tmelina           #+#    #+#             */
/*   Updated: 2020/12/06 22:50:23 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int		get_next_line(int fd, char **line);
{
	char *buffer;
	long BUFFER_SIZE;
	read(fd, buffer, BUFFER_SIZE);
	return (0);
}