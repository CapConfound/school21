/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:02:47 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/10 20:36:29 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

size_t	ft_get_remsize(char *arr, size_t buffsize)
{
	char	*s;
	size_t	remsize;

	s = (char *)arr;
	remsize = buffsize;
	while (*s++ != '\0')
	{
		remsize--;
	}
	return (remsize);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*s;
	size_t	pointer;
	int		i;
	size_t	res;

	s = (char *)src;
	if (ft_strlen(dest) >= size)
		return (size + ft_strlen(s));
	res = ft_strlen(s) + ft_strlen(dest);
	if (size == 0)
		return (res);
	i = -1;
	s = (char *)src;
	pointer = ft_get_remsize(dest, size);
	pointer = size - pointer;
	while (src[++i] != '\0' && pointer < size - 1)
		dest[pointer++] = s[i];
	dest[pointer] = '\0';
	return (res);
}

// int	main()
// {
// 	char src[] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char dest[101] = "there is no stars in the sky";
// 	// char dest1[21] = "adsf";
// 	int x = ft_strlcat(dest, src, 41);
// 	// int x1 = strlcat(dest1, src, 21);

// 	printf("%d:%s\n", x, dest);
// 	// printf("%d:%s\n", x1, dest1);

// 	return 0;
// }