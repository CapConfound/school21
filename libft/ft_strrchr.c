/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:07:44 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/07 13:16:12 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
	unsigned char *p;
	unsigned char *buf;

	buf = 0;
	p = (unsigned char*)str;
	if (c == '\0') return ("");
	while ((unsigned char)*p != '\0')
	{
		if ((unsigned char)*p == c) buf = p;
		p++;
	}
	return ((char *)buf);
}
