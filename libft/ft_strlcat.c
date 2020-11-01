/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:02:47 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/01 16:59:10 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

int	ft_strlcat(char *dest, const char *src,  size_t size)
{
	unsigned int ix;
	unsigned int iy;

	ix = 0;
	iy = 0;
	if (size > 0)
	{
		while (dest[ix] != '\0')
			ix++;
		while (src[iy] != '\0')
		{
			dest[ix] = src[iy];
			ix++;
			iy++;
		}
		dest[ix] = '\0';
	}
	return(ix - 1);
}

// int	main()
// {
// 	char buf[] = "ksss1";
// 	char p[21];
// 	strlcat(p, buf, 3);
// 	printf("%s", p);
// 	return 0;
// }