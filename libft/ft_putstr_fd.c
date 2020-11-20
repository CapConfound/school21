/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:22:15 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/20 19:22:34 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"\

void	ft_putstr_fd(char *s, int fd)
{
	size_t len;

	if (!fd || !s)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
}
