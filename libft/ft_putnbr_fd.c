/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:33:37 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/22 11:41:07 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char str[50];
	char c;
	int ix;
	int neg;

	neg = 1;
	ix = 0;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0 && n >= -2147483648)
	{
		ft_putchar_fd('-', fd);
		neg = -1;
	}
	while (n != 0)
	{
		str[++ix] = n % 10;
		n /= 10;
	}
	while (ix > 0)
	{
		c = str[ix--] * neg + '0';
		ft_putchar_fd(c, fd);
	}
}
