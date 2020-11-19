/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:09:56 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/19 16:59:08 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*p;

	p = (char*)str;
	// if (c == 0)
	// 	return ("\0");
	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	return (NULL);
}
int main ()
{
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	//puts(strchr(((void *)0), '0'));
	puts(ft_strchr(src, '\0'));

}