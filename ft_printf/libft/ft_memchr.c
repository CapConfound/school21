/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 20:49:12 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/17 15:45:58 by tmelina          ###   ########.fr       */
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
