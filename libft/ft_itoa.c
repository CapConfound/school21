/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:57:18 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/24 20:15:00 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		dignum(int i)
{
	int res;

	res = 1;
	if (i < 0)
		res++;
	while ((i / 10) != 0)
	{
		i /= 10;
		res++;
	}
	return (res);
}

char			*ft_itoa(int nb)
{
	char	*res;
	int		dcount;
	int		neg;

	neg = 1;
	dcount = dignum(nb);
	res = malloc((dcount) + 1);
	if (!res)
		return (NULL);
	if (nb < 0)
	{
		res[0] = '-';
		neg = -1;
	}
	res[dcount] = '\0';
	dcount--;
	if (nb == 0)
		res[0] = '0';
	while (nb != 0)
	{
		res[dcount--] = ((nb % 10) * neg + 48);
		nb /= 10;
	}
	return (res);
}
