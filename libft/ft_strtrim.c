/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:59:42 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/19 13:33:43 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char *str;
	size_t	count_b;

	str = (char *)s1;
	count_b = 0;
	i = 0;
	while (ft_strchr(set, str[i++]))
		count_b++;
	i = ft_strlen(str);
	while (ft_strchr(set, str[i]))
		i--;
	return (ft_substr(str, count_b, i+1));
}

int	main ()
{
    char s1[] = "  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n ";

    puts(ft_strtrim(s1, "\n \t"));
	return 0;
}