/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:59:42 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/25 22:14:30 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*str;
	size_t	count_b;

	if (!s1 || !set)
		return (NULL);
	if (0 == *s1)
		return ("\0");
	str = (char *)s1;
	count_b = 0;
	i = 0;
	while (ft_strchr(set, str[i++]) && str[i - 1] != '\0')
		count_b++;
	i = ft_strlen(str) - 1;
	if (count_b != i + 1)
		while (ft_strchr(set, str[i]))
			i--;
	str = ft_substr(str, count_b, i - count_b + 1);
	return (str);
}
