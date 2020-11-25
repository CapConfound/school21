/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:34:03 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/25 21:41:07 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen((char *)s))
		return (NULL);
	if (ft_strlen((char *)s) <= start)
		i = len;
	subs = malloc(((len + 1) * sizeof(char)));
	if (!subs)
		return (NULL);
	while (i < len)
		subs[i++] = s[start++];
	subs[i] = 0;
	return (subs);
}

// int main()
// {
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	puts(ft_substr(str, 400, 20));
// }