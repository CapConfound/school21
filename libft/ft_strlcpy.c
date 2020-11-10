/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:01:47 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/10 19:03:04 by tmelina          ###   ########.fr       */
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


    // if (size > 0)
    // {
    //     while (ix < size)// && src[ix] != '\0')
    //     {
    //         if (*src != '\0')
    //             *dest++ = *src++;
    //         else
    //             break ;
    //         ix++;
    //     }
    //     *dest = '\0';
    //     return (ix);
    // }
    // return (size + ft_strlen(src));
}
// int main()
// {
//     char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char buff1[0xF00];
// 	char buff2[0xF00];
//     size_t ret1;
// 	size_t ret2;


// 	ret1 = strlcpy (buff1, str, strlen(buff1));
//     printf("len - %zu orig - ", ret1);
//     puts(buff1);
//     ret2 = ft_strlcpy (buff2, str, strlen(buff2));
//     printf("len - %zu mine - ", ret2);
//     puts(buff2);
// }