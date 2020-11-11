/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:38:33 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/11 12:37:10 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	return_atoi(int res, int neg)
{
	if (res < -2147483648 || res > 2147483647)
		return (-1);
	return (res * neg);
}

int	ft_atoi(const char *str)
{
	int res;
	int i;
	int neg;
	int j;

	res = 0;
	j = 0;
	i = 0;
	neg = 1;
	while (str[i] != '\0' && !((str[i] >= 48 && str[i] <= 57) || (str[i] == '-')))
		i++;
	if (j == 0)
	{
		if (str[i] == '-')
			neg = -1;
		else
		{
			neg = 1;
			i--;
		}
		j = neg == -1 ? 1 : 0;
	}
	while (str[++i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - '0');
		if (str[i] < 48 || str[i] > 57)
			return (return_atoi(res, neg));
	}
	return (return_atoi(res, neg));
}

// int main(){
// 	char *smth = "647";
// 	printf("%d\n", atoi(smth));
// 	printf("%d\n", ft_atoi(smth));
// }