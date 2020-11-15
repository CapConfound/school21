/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 19:17:22 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/15 20:47:33 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char *dest;
	unsigned char *src;
	// size_t i;

	dest = (unsigned char *)str1;
	src = (unsigned char *)str2;
	if (!dest && !src)
		return (NULL);
	if (src < dest)
		while (n--)
			dest[n] = (unsigned char)src[n];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
