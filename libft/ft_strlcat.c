/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:02:47 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/09 15:10:01 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <unistd.h>
#include "libft.h"

size_t ft_get_remsize (char *arr, size_t buffsize)
{
	char *s;
	size_t remsize;

	s = (char *)arr;
	remsize = buffsize;
	while (*s++ != '\0')
	{
		remsize--;
	}
	return (remsize);

}

size_t	ft_strlcat(char *dest, const char *src,  size_t size)
{
	char	*s;
	size_t pointer; // сколько места есть в буфере
	int i;

	i = 0;
	s = (char *)src;
	puts(dest);
	pointer = ft_get_remsize(dest, size);
	pointer = size - pointer;
	while (src[i] != '\0')
    {
		dest[pointer++] = s[i];
		i++;
	}
    dest[pointer] = '\0';
    return (pointer);
}

int	main()
{
	char src[] = "ksss1\0sakld";
	char dest[21] = "ireallysuckatthis";
	// char dest1[21] = "adsf";
	int x = ft_strlcat(dest, src, 41);
	// int x1 = strlcat(dest1, src, 21);

	printf("%d:%s\n", x, dest);
	// printf("%d:%s\n", x1, dest1);

	return 0;
}