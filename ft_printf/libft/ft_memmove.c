/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 19:17:22 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/17 15:26:17 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char *dest;
	unsigned char *src;

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
