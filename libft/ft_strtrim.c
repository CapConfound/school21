/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:59:42 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/19 16:17:03 by tmelina          ###   ########.fr       */
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
	str = (char *)s1;
	count_b = 0;
	i = 0;
	while (ft_strchr(set, str[i++]))
		count_b++;
	i = ft_strlen(str) - 1;
	while (ft_strchr(set, str[i]))
		i--;
	str = ft_substr(str, count_b, i - count_b + 1);
	// if (!str)
	// 	return (NULL);
	return (str);
}


// int	main ()
// {
//     char *s1 = "  \t \t \n   \n\n\n\t";
// 	char *ret = ft_strtrim(s1, " \n\t");
//     puts(ret);
// 	return 0;
// }