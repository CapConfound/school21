/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:11:07 by tmelina           #+#    #+#             */
/*   Updated: 2020/10/31 17:02:51 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char* sequence;
	unsigned char ch;

	ch = c;
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
// 	// char str[] = "almost every programmer should know memset!";
// 	char str[] = "almo";
// 	memset (str,'-',6);
// 	puts (str);
// 	ft_memset (str,'-',6);
// 	puts (str);
// 	return 0;
// }