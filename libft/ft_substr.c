/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:34:03 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/25 23:52:28 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (slen <= start)
	{
		if (!(subs = malloc(sizeof(*s) * 1)))
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	if (len > slen)
		len = slen;
	if (!(subs = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len && i < slen && s[start])
		subs[i++] = s[start++];
	subs[i] = 0;
	return (subs);
}
