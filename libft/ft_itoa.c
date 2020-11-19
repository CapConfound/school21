/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:57:18 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/18 21:25:37 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		dignum(long int i)
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

// static long int		reverse(long int i)
// {
// 	long int rev;
// 	int last;
// 	int neg;

// 	rev = 0;
// 	last = 0;
// 	neg = 1;
// 	if (i == 0)
// 		return (0);
// 	if (i < 0)
// 	{
// 		i *= -1;
// 		neg = -1;
// 	}
// 	while (i > 0)
// 	{
// 		last = i % 10;
// 		rev = (rev * 10) + last;
// 		i /= 10;
// 	}
// 	return (rev * neg);
// }

char			*ft_itoa(int nb)
{
	char	*res;
	int		dcount;
	int		i;

	i = 0;
	if (nb == 0)
		return ("0");
	dcount = dignum(nb);
	res = malloc((dcount * sizeof(int)) + 1);
	if (!res)
		return (NULL);
	while (i < dcount)
		res[i++] = '0';
	res[dcount] = '\0';
	if (nb < 0)
		res[0] = '-';
	while (res[dcount] != '-' || dcount >= 0)
	{
		res[dcount--] = (char)((nb % 10) + 48);
		nb /= 10;
	}
	return (res);
}
int main()
{
	int c = -234390;
	printf("%d\n%s\n", c, ft_itoa(c));
}

