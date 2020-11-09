/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogroup <seogroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 12:11:02 by seogroup          #+#    #+#             */
/*   Updated: 2020/11/09 12:47:40 by seogroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		isnegative(int neg)
{
	if (neg % 2 == 1)
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
    int res;
    int i;
    int neg;

    res = 0;
    i = -1;
    neg = 0;
    while (str[++i] != '\0')
    {
        if(str[i] == '-')
            neg++;
        if(str[i] >= 48 && str[i] <= 57)
        {
            res = res * 10 + (str[i] - '0');
            if (str[i + 1] < 48 || str[i + 1] > 57)
                return (res * isnegative(neg));
        }
    }
    return (res * isnegative(neg));
}

int main(){
	char *smth = "-023fds21";
	printf("%d\n", atoi(smth));
	printf("%d\n", ft_atoi(smth));
}