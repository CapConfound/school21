/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 22:52:28 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/26 20:17:01 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
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
