/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:38:33 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/09 15:34:06 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
    unsigned long int res;
    int i;
    int neg;

    res = 0;
    i = -1;
    neg = 1;
    while (str[++i] != '\0')
    {
        neg = str[i] == '-' ? -1 : 1;
        if(str[++i] >= 48 && str[i] <= 57)
        {
            while (str[i] >= 48 && str[i] <= 57)
            {
                res = res * 10 + (str[i] - '0');
                if (str[i] < 48 || str[i] > 57)
                    return (res * neg);
                i++;
            }
            if (res > 2147483647 || res < -2147483647)
                return (0);
            return (res * neg);
        }
        if (res > 2147483647 || res < -2147483647)
            return (-1);
        return (0);
    }
    return (res * neg);
}

int main(){
    char *smth = "-999999999999999";
    printf("%d\n", atoi(smth));
    printf("%d\n", ft_atoi(smth));
}