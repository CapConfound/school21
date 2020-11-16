/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:28:46 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/16 13:28:12 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    char *hay;
    char *needle;
    size_t needle_len;
    size_t i;
    size_t j;

    if (*little == 0)
        return ((char *)big);
    hay = (char *)big;
    needle = (char *)little;
    needle_len = ft_strlen(needle);
    j = 0;
    if (ft_strlen(hay) < needle_len)
        return (NULL);
    while (j < len)
    {
        i = -1;
        while (hay[j] == needle[++i])
        {
            if (i == needle_len - 1)
                return ((char *)&hay[j - i]);
            j++;
        }
        j++;
    }
    return (NULL);
}
// int main(){
//     puts(ft_strnstr("fake", ((void *)0), 3));
// }