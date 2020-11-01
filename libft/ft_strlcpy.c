/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:01:47 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/01 20:13:07 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int ix;

	ix = 0;
	if (size > 0)
	{
		while (dest[ix] < (int)(size - 1))
		{
			if (src[ix] != '\0')
			{
				dest[ix] = src[ix];
				break ;
			}
			dest[ix] = '\0';
			ix++;
		}
		return (ix);
	}
	return (ix);
}
