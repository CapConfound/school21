/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 22:52:28 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/09 17:43:15 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*str1;
	int		lenght;

	lenght = ft_strlen(str);
	str1 = NULL;
	if ((!str) || (!(str1 = malloc(sizeof(char) * lenght + 1))))
		return (NULL);
	ft_strlcpy(str1, str, lenght + 1);
	return (str1);
}

// int main ()
// {
// 	char str[] = "lorem ipsum dolor sit amet";
// 	char *s1 = ft_strdup(str);
// 	long int i;
// 	i = &s1;
// 	printf("%s^%ld\n", s1, i);
// 	char *s2 = strdup(str);
// 	i = &s2;
// 	printf("%s^%ld\n", s2, i);

// }