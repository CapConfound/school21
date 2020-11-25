/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:34:03 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/25 22:14:25 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen((char *)s);
	if (!s)
		return (NULL);
	if (slen <= start)
	{
		if (!(subs = malloc(sizeof(char) * 1)))
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	if (len > slen)
		len = slen;
	subs = malloc(((slen + 1) * sizeof(char)));
	if (!subs)
		return (NULL);
	while (i < len && i < slen)
		subs[i++] = s[start++];
	subs[i] = 0;
	return (subs);
}
