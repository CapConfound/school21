/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 11:42:14 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/25 00:11:37 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	countwords(char const *s, char div)
{
	size_t			i;
	int				is_end;
	unsigned int	words;

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

char				**malloc_error(char **s)
{
	while (s)
		free(*s++);
	free(s);
	return (NULL);
}

static char			*get_next_word(char const *s, unsigned int i, char d)
{
	char			*res;
	unsigned int	j;

	res = NULL;
	j = i;
	if (!s)
		return (0);
	while (s[i] != d && s[i++])
		j++;
	return (ft_substr(s, i, j));
}

char				**ft_split(char const *s, char c)
{
	char			**result;
	char			*str2write;
	unsigned int	i;
	unsigned int	row;

	if (!s || !c)
		return (NULL);
	result = malloc(countwords(s, c) * sizeof(char));
	if (!result)
		return (NULL);
	str2write = NULL;
	i = 0;
	row = 0;
	while (row < countwords(s, c) || s[i])
	{
		str2write = get_next_word(s, i, c);
		puts(str2write);
		i = i + ft_strlen(str2write) + 1;
		result[row] = malloc(ft_strlen(str2write) * sizeof(char) + 1);
		if (!result[row])
			return (malloc_error(result));
		ft_strlcpy(result[row], str2write, ft_strlen(str2write) + 1);
		row++;
	}
	return (result);
}

int					main(void)
{
	char	**spl;

	spl = ft_split("dfskla,fdkl,adfsj,adsfj,,as", ',');
	// for (int i = 0; i < 5; i++)
	// {
	// 	for (int j = 0; j < ft_strlen(spl[i]); j++)
	// 	{
	// 		putchar(spl[i][j]);
	// 	}
	// 	putchar('\n');
	// }
	
}
