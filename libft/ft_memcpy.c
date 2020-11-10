/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:38:52 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/10 11:29:59 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memcpy(void* dest, const void* src, size_t size)
{
	unsigned char *s;
	unsigned char *d;
	size_t i;

	s = (unsigned char *)src;
	d = dest;
	i = -1;
	if (src == NULL && dest == NULL && size)
		return (NULL);
	while (++i < size)
		d[i] = s[i];
	return (d);
}