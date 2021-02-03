/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 11:42:14 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/26 20:16:10 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		countwords(char const *s, char div)
{
	size_t	i;
	size_t	is_end;
	size_t	words;

	if (!s)
		return (0);
	is_end = 1;
	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == div)
			is_end = 1;
		else if (is_end == 1)
		{
			is_end = 0;
			words++;
		}
		i++;
	}
	return (words);
}

static char			**malloc_error(char **s)
{
	while (s)
		free(*s++);
	free(s);
	return (NULL);
}

static int			get_next_word(char const *s, char d)
{
	size_t			i;

	i = 0;
	while (*s == d && *s != 0)
		s++;
	while (*s != d && *s)
	{
		s++;
		i++;
	}
	return (i);
}

static int			count_sd(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s == c && *s != 0)
	{
		s++;
		i++;
	}
	return (i);
}

char				**ft_split(char const *s, char c)
{
	char	**result;
	int		str2write;
	int		strlen;
	int		row;

	if (!s)
		return (NULL);
	strlen = countwords(s, c);
	if (!(result = (char **)malloc((strlen + 1) * sizeof(char *))))
		return (NULL);
	str2write = 0;
	row = 0;
	while (row < strlen)
	{
		str2write = get_next_word(s, c);
		s += count_sd(s, c);
		result[row] = malloc(str2write * sizeof(char) + 1);
		if (!result[row])
			return (malloc_error(result));
		ft_strlcpy(result[row], s, str2write + 1);
		s += str2write;
		row++;
	}
	result[row] = 0;
	return (result);
}
