/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:07:44 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/04 20:36:33 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    char *p;
    int i;
    char *buf;

    i = 0;
    p = (char*)str;
    if (*p == '\0') return (p);
    while (*p != '\0')
    {
        if (*p == c) buf = p;
        p++;
    }
        
    return (buf);
}
int main ()
{
    printf("%s", ft_strrchr("abbbbbbb", 'a'));
}