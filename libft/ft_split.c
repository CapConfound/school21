/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 11:42:14 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/25 18:29:07 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static size_t	countwords(char const *s, char div)
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

static char		**malloc_error(char **s)
{
	while (s)
		free(*s++);
	free(s);
	return (NULL);
}

// static char			*get_next_word(char const *s, char d)
// {
// 	char			*res;
// 	size_t			i;
	
// 	i = 0;
// 	res = NULL;
// 	if (!*s)
// 		return (NULL);
// 	while (*s == d || *s != 0)
// 		s++;
// 	while (s[i] != d && s[i])
// 		i++;
// 	return (ft_substr(s, 0, i));
// }

static void		get_next_word(char **s, size_t *strlen,
				char c)
{
	size_t	i;

	i = 0;
	*s += *strlen;
	*strlen = 0;
	while (**s && **s == c)
		(*s)++;
	while ((*s)[i])
	{
		if ((*s)[i] == c)
			return ;
		(*strlen)++;
		i++;
	}
}

char			**ft_split(char const *s, char c)
{
	char	**result;
	char	*str2write;
	size_t	strlen;
	size_t	i;
	size_t	row;

	if (!s)
		return (NULL);
	result = malloc(countwords(s, c) * sizeof(char));
	if (!result)
		return (NULL);
	str2write = (char *)s;
	i = 0;
	strlen = 0;
	row = 0;
	while (row < countwords(s, c))
	{
		get_next_word(&str2write, &strlen, c);
		result[row] = malloc(ft_strlen(str2write) * sizeof(char) + 1);
		if (!result[row])
			return (malloc_error(result));
		ft_strlcpy(result[row], str2write, ft_strlen(str2write) + 1);
		row++;
	}
	return (result);
}

int				main(void)
{
	char	**spl;
	spl = ft_split("olol  ", ' ');
	for (int i = 0; i < 2; i++)
	{
		ft_putendl_fd(spl[i], 1);
	}
}
