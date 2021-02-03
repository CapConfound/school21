/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:02:47 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/17 15:29:06 by tmelina          ###   ########.fr       */
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
