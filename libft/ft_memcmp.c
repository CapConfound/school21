/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 21:08:22 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/26 20:03:46 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			ix;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	ix = 0;
	while (ix < n)
	{
		if (str1[ix] != str2[ix])
			return (str1[ix] - str2[ix]);
		ix++;
	}
	return (0);
}
