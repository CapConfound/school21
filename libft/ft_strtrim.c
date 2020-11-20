/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:59:42 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/20 14:53:15 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char *str;
	size_t	count_b;

	if (!s1 || !set)
		return (NULL);
	if (0 == *s1 || *set == 0)
		return ("\0");
	str = (char *)s1;
	count_b = 0;
	i = 0;
	while (ft_strchr(set, str[i++]))
		count_b++;
	i = ft_strlen(str) - 1;
	while (ft_strchr(set, str[i]))
		i--;
	str = ft_substr(str, count_b, i - count_b + 1);
	return (str);
}


// int	main ()
// {
//     char *s1 = "";
// 	char *s2 = "";
// 	char *ret = ft_strtrim(s1, " \n\t");
//     puts(ret);
// 	puts(s2);
// 	return 0;
// }