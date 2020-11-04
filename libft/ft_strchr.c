/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:09:56 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/04 19:06:06 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    char *p;
    int i;

    i = 0;
    p = (char*)str;
    while (*p != c)
    {
        if (*p == '\0') return (NULL);
        p++;
    }
    return (p);
}