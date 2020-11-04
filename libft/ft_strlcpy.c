/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:01:47 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/04 14:00:04 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
    size_t ix;

    ix = 1;
    if (size > 1)
    {
        while (ix < size - 1)// && src[ix] != '\0')
        {
            if (*src != '\0')
                *dest++ = *src++;
            else
                break ;
            ix++;
        }
        *dest = '\0';
        return (ix);
    }
    return (size + ft_strlen(src));
}
// int main()
// {
//     char dest[] = "there is no stars in the sky";
//     char dest1[] = "there is no stars in the sky";
//     int ret1 = 0;
//     int ret2 = 0;

// 	char src[] = "help me!";


// 	ret1 = strlcpy (dest, src, strlen(dest));
//     printf("len - %d orig - ", ret1);
//     puts(dest);
//     ret2 = ft_strlcpy (dest1, src, strlen(dest));
//     printf("len - %d mine - ", ret2);
//     puts(dest1);
// }