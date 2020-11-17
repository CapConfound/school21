/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 21:08:22 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/17 15:25:37 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		my_strncmp(unsigned char *s1, unsigned char *s2, size_t n)
{
	size_t			ix;
	unsigned char	diff;
	unsigned char	c1;
	unsigned char	c2;

	ix = 0;
	while ((s1[ix] || s2[ix]) && (ix < n))
	{
		c2 = (unsigned char)s2[ix];
		c1 = (unsigned char)s1[ix];
		diff = c2 - c1;
		if (c2 > c1)
			return (-diff);
		else if (c2 < c1)
			return (diff);
		ix++;
	}
	return (0);
}

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	return (my_strncmp(str1, str2, n));
}
