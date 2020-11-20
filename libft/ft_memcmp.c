/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 21:08:22 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/20 12:53:14 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
char 	*str1;
char 	*str2;
size_t	ix;

str1 = (char *)s1;
str2 = (char *)s2;
ix = 0;
while (str1[ix] == str2[ix] && (ix < n))
		ix++;
	if (ix == n)
		return (0);
	return ((unsigned char)str1[ix] - (unsigned char)str2[ix]);
}
