/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:30:39 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/21 14:48:56 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned char ch;

	if (!s || fd < 0)
		return ;
	ch = '\n';
	ft_putstr_fd(s, fd);
	write(fd, &ch, 1);
}
