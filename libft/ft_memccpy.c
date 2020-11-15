/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 12:37:57 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/15 16:01:25 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t count)
{
	unsigned char *s;
	unsigned char *d;
	size_t i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = -1;
	while (++i < count)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)ch)
			return (d + i + 1);			
	}
	return (NULL);
}

