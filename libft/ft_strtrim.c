/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:59:42 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/17 15:52:35 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_alphabet(char ch, char *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
		if (ch == set[i++])
			return (1);
	return (0);
}

static size_t	puretextlen(char *str, char *set)
{
	size_t	i;
	size_t	count_b;
	size_t	count_e;

	count_b = 0;
	count_e = 0;
	i = 0;
	while (is_alphabet(str[i++], set))
		count_b++;
	i = ft_strlen(str);
	while (is_alphabet(str[i--], set))
		count_e++;
	return (ft_strlen(str) - (count_e + count_b));
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	count_str;
	char	*res;

	count_str = 0;
	count_str = puretextlen((char *)s1, (char *)set);
	i = 0;
	j = 0;
	res = malloc((count_str * sizeof(char)));
	if (!res)
		return (NULL);
	while (s1[i])
	{
		if (!is_alphabet(s1[i], (char *)set))
			res[j++] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
