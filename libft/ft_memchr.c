/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 20:49:12 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/15 21:07:59 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t n)
{
	unsigned char *src;
	
	src = (unsigned char *)str;
	while (n--)
	{
		if (*src == (unsigned char)ch)
			return (src);
		src++;
	}
	return (NULL);
}