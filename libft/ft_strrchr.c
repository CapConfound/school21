/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:07:44 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/10 19:01:41 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char *p;
	unsigned char *buf;

	buf = 0;
	p = (unsigned char*)str;
	if (c == '\0')
		return ("\0");
	while ((unsigned char)*p != '\0')
	{
		if ((unsigned char)*p == c)
			buf = p;
		p++;
	}
	return ((char *)buf);
}
// int main ()
// {

// 	puts(strrchr("dssad", '\0'));
// 	puts(ft_strrchr("dssad", '\0'));
	
// }