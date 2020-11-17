/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:34:03 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/17 16:39:49 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	subs = malloc((len * sizeof(char)) + 1);
	i = 0;
	if (!subs || !s)
		return (NULL);
	if (start > ft_strlen((char *)s))
		return ("\0");
	if (ft_strlen((char *)s) <= start)
		i = len;
	while (i < len)
		subs[i++] = s[start++];
	subs[i] = '\0';
	return (subs);
}