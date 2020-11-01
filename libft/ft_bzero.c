/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:10:40 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/01 18:28:14 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char *sequence;
	unsigned int i;

	sequence = s;
	i = 0;
	while (i < n)
	{
		*sequence++ = 0;
		i++;
	}
	return (s);
}

// int		main()
// {
// 	char str[] = "almost every programmer should know memset!";
// 	// char str[] = "almo";
// 	bzero (str, 2);
// 	puts (str);
// 	ft_bzero (str, 2);
// 	puts (str);
// 	return 0;
// }