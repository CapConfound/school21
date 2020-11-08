/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 22:52:28 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/07 23:37:59 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*str1;

	str1 = NULL;
	if (!str)
		return (NULL);
	ft_strlcpy(str1, str, ft_strlen(str));
	return (str1);
}

// int main()
// {
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	puts(ft_strdup(str));
// 	puts(strdup(str));
// }