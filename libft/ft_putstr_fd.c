/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:22:15 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/19 14:04:45 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"\

void	ft_putstr_fd(char *s, int fd)
{
	size_t len;

	if (!fd || !s)
		return ;
	len = ft_strlen(s);
	write (fd, s, len);
}