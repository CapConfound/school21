/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:07:44 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/05 21:08:07 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    unsigned char *p;
    unsigned char *buf;

    p = (unsigned char*)str;
    if (*p == '\0') return (NULL);
    while ((unsigned char)*p != '\0')
    {
        if ((unsigned char)*p == c) buf = p;
        p++;
    }
    
        
    return ((char*)buf);
}
int main ()
{
    printf("%s", ft_strrchr("īœ˙ˀ˘¯ˇ¸¯.œ«‘––™ª•¡¶¢˜ˀ", L'–'));
}