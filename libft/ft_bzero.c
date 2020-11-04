/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:10:40 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/04 13:08:16 by tmelina          ###   ########.fr       */
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
