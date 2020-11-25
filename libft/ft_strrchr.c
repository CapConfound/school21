/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:07:44 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/25 23:07:48 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t			lenght;
	unsigned char	*s;

	s = (unsigned char *)str;
	lenght = ft_strlen((const char *)s);
	while (lenght)
	{
		if (s[lenght] == (char)c)
			break ;
		lenght--;
	}
	if (s[lenght] == (char)c)
		return ((char *)&str[lenght]);
	return (NULL);
}
