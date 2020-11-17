/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:01:47 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/17 15:29:23 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t i;

	i = -1;
	if (!dest || !src)
		return (0);
	if (size < 1)
		return (ft_strlen(src));
	while (src[++i] && i < size - 1)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	if (ft_strlen(src) > size)
		while (src[i])
			i++;
	return (i);
}
