/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 21:08:22 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/19 20:31:51 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		my_strncmp(unsigned char *s1, unsigned char *s2, size_t n)
{
	size_t			ix;
	unsigned char	diff;

	ix = 0;
	diff = 0;
	while (ix < n)
	{
		if (!*s2 || !*s1)
			break ;
		if (*s2 > *s1)
			diff = *s2 - *s1;
		else if (*s2 < *s1)
			diff = *s1 - *s2;
		if (diff)
			return (diff);
		s2++;
		s1++;
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
