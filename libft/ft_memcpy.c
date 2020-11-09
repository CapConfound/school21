/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:38:52 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/09 18:01:15 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memcpy(void* dest, const void* src, size_t size)
{
	unsigned char *s;
	unsigned char *d;
	size_t i;

	s = src;
	d = dest;
	i = -1;
	while (++i < size)
		d[i] = s[i];
	return (d);
}