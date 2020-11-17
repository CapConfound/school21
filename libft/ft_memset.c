/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:11:07 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/17 15:26:27 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*sequence;
	unsigned int	ch;
	unsigned int	i;

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
