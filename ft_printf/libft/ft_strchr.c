/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:09:56 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/20 17:54:57 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*p;

	p = (char*)str;
	if (*p == c)
		return (p);
	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
		if (*p == c)
			return (p);
	}
	return (NULL);
}
