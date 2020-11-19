/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:57:18 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/19 20:21:56 by tmelina          ###   ########.fr       */
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
// int main()
// {
// 	int c = -234390;
// 	printf("%d\n%s\n", c, ft_itoa(c));
// }

