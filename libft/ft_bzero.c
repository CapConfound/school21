/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:10:40 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/17 15:22:21 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*sequence;
	unsigned int	i;

	sequence = s;
	i = 0;
	while (i < n)
	{
		*sequence++ = 0;
		i++;
	}
	return (s);
}
