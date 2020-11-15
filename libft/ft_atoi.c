/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:38:33 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/11 22:00:26 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	return_atoi(long int res, int neg)
{
	long int out;

	out = res * neg;
	if (out > 2147483647)
		return (0);
	if (out < -2147483648)
		return (0);
	return (out);
}

int	ft_atoi(const char *str)
{
	long int res;
	int i;
	int neg;

	res = 0;
	i = 0;
	neg = 1;
	while (str[i] != '\0' && !(ft_isdigit(str[i]) || (str[i] == '-') || (str[i] == '\e')))
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		if (!ft_isdigit(str[i + 1]))
			return (return_atoi(res, neg));
		i++;
	}
	return (return_atoi(res, neg));
}

// int main(){
// 	char *smth =  "99999999999999999999999999";
// 	printf("%d\n", atoi(smth));
// 	printf("%d\n", ft_atoi(smth));
// }