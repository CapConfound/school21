/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:11:07 by tmelina           #+#    #+#             */
/*   Updated: 2020/10/31 18:12:23 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *sequence;
	unsigned int ch;
	unsigned int i;

	ch = c;
	sequence = s;
	i = 0;
	while (i < n)
	{
		*sequence++ = ch;
		i++;
	}
	return (s);
}

int		main()
{
	// char str[] = "almost every programmer should know memset!";
	char str[] = "noanimehere";
	// memset (str,'-',25);
	// puts (str);
	ft_memset (str,'A', 55);
	puts (str);
	return 0;
}