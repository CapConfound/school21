/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:28:46 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/20 11:50:59 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*hay;
	char	*needle;
	size_t	i;
	size_t	j;

	if (*little == 0)
		return ((char *)big);
	hay = (char *)big;
	needle = (char *)little;
	j = 0;
	if (ft_strlen(hay) < ft_strlen(needle) || !len)
		return (NULL);
	while (j < len - ft_strlen(needle))
	{
		i = -1;
		while (hay[j] == needle[++i])
		{
			if (i == ft_strlen(needle) - 1)
				return ((char *)&hay[j - i]);
			j++;
		}
		j++;
	}
	return (NULL);
}
