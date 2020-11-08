/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:02:47 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/08 19:56:51 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src,  size_t size)
{
	char *ldest;
	char *lsrc;
	size_t ix;
	size_t iy;

	ldest = dest;
	lsrc = src;
	ix = size;
	while (ldest != '\0' && ix-- > 0)
		ldest++;
	iy = ldest - dest;
	ix -= iy;
	if (ix == 0)
		return (iy + ft_strlen(src));
	while (*lsrc != '\0')
		if (ix-- != 1)
			*ldest++ = *lsrc;
		src++;
	*dest = '\0';
	return(ldest + (lsrc - src));
}

int	main()
{
	char *buf= "the cake is a lie !\0I'm hidden lol\r\n";
	char p1[40]= "there is no stars in the sky";
	char p2[40]= "there is no stars in the sky";
	size_t s1, s2;


	s1 = strlcat(p1, buf, 0);
	printf("%zu:%s\n", s1, p1);
	s2 = ft_strlcat(p2, buf, 0);
	printf("%zu:%s\n", s2, p2);
	return 0;
}