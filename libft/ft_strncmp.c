/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:42:06 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/04 18:05:26 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t ix;
	unsigned char diff;
	unsigned char c1;
	unsigned char c2;

	ix = 0;
	while (((unsigned char)s1[ix] != '\0' || (unsigned char)s2[ix] != '\0') && (ix < n))
	{
		c2 = (unsigned char)s2[ix];
		c1 = (unsigned char)s1[ix];
		diff = c2 - c1;
		if (c2 > c1) return (-diff);
		else if (c2 < c1) return (diff);
		ix++;
	}
	return (0);
}

