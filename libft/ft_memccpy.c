/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 12:37:57 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/11 13:02:43 by tmelina          ###   ########.fr       */
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
	if (src == NULL && dest == NULL && count)
		return (NULL);
	while (++i < count && d[i] != ch)
		d[i] = s[i];
	return (d);
}
