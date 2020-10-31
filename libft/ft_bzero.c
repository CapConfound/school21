/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:10:40 by tmelina           #+#    #+#             */
/*   Updated: 2020/10/31 17:02:16 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char* sequence;
	unsigned char ch;

	ch = 0;
	sequence = s;
	while (n > 0)
	{
		sequence = &ch;
		sequence++;
		n--;
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