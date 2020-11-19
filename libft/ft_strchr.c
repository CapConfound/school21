/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:09:56 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/19 13:07:26 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*p;

	p = (char*)str;
	while (*p)
	{
		if (*p == c)
			return (p);
		if (*p == '\0')
			return (NULL);
		p++;
	}
	return (NULL);
}
