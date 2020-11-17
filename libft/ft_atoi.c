/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:38:33 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/17 15:47:28 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		return_atoi(long int res, int neg)
{
	long int out;

	out = res * neg;
	if (out > 2147483647)
		return (0);
	if (out < -2147483648)
		return (0);
	return (out);
}

int		ft_atoi(const char *str)
{
	long int	res;
	int			i;
	int			neg;

	res = 0;
	i = 0;
	neg = 1;
	while (ft_isdigit(str[i]) || (str[i] == '-') || (str[i] == '+')  || (str[i] == '\t')  || (str[i] == '\v')  || (str[i] == '\f') || (str[i] == '\r') || (str[i] == ' ')  || (str[i] == '\n'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
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
// 	char *smth =  "\t\n\r\v\f  469 \n";
// 	printf("%d\n", atoi(smth));
// 	printf("%d\n", ft_atoi(smth));
// }