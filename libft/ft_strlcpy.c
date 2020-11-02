/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:01:47 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/02 15:55:30 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
    unsigned int ix;

    ix = 0;
    if (size > 0)
    {
        while (ix < size && src[ix] != '\0')
        {
            dest[ix] = src[ix];
            ix++;
        }
        dest[ix] = '\0';
        return ((size_t)strlen(dest));
    }
    return (size + strlen(src));
}
int main()
{
    char dest[] = "there is no stars in the sky";
    char dest1[] = "there is no stars in the sky";
    


	char src[] = "help me!";


	strlcpy (dest, src, strlen(dest));
    printf("orig - ");puts(dest);
    ft_strlcpy (dest1, src, strlen(dest));
    printf("mine - ");puts(dest1);
}