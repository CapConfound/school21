/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 19:17:22 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/14 20:56:22 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t n)
{
    unsigned char *dest;
    unsigned char *src;
    size_t i;

    i = 0;
    dest = (unsigned char *)str1;
    src = (unsigned char *)str2;
    // if (!str1 || !str2 || !n)
    //     return (NULL);
    while ((src[i] || dest[i] != '\0') && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);

}
// #include <stdio.h>
// #include <string.h>

// int main () {
//    char dest[] = "oldstrinccccc";
//    const char src[]  = "newstring";

//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest, src, 9);
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }