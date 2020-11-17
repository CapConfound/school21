/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:36:52 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/17 12:49:51 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *subs;
	size_t i;

	subs = malloc((len * sizeof(char)) + 1);
	i = 0;
	if(!subs)
		return (NULL);
	if (ft_strlen((char *)s) <= start)
		i = len;
	while (i < len)
		subs[i++] = s[start++];
	subs[i] = '\0';
	return (subs);
}