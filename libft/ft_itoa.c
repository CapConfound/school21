/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:57:18 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/17 18:37:50 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		dignum(int i)
{
	int res;

	res = 0;
	if (i < 0)
		res = 1;
	while (i != 0)
	{
		i /= 10;
		res++;
	}
	return (res);
}

static int		reverse(int i)
{
	int rev;
	int last;
	int neg;

	rev = 0;
	last = 0;
	neg = 1;
	if (i == 0)
		return (0);
	if (i < 0)
	{
		i *= -1;
		neg = -1;
	}
	while (i > 0)
	{
		last = i % 10;
		rev = (rev * 10) + last;
		i /= 10;
	}
	return (rev * neg);
}

char			*ft_itoa(int n)
{
	char	*res;
	int		dcount;
	int		i;

	i = 0;
	if (n == 0)
		return ("0");
	dcount = dignum(n);
	res = malloc((dcount * sizeof(int)) + 1);
	if (!res)
		return (NULL);
	n = reverse(n);
	if (n < 0)
	{
		res[i] = '-';
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		res[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	return (res);
}
