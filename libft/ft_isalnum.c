/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:33:50 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/04 14:02:00 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c)) return (1);
	return (0);
}
// int main ()
// {
// 	char x = 'a';
// 	printf("%d", isalnum(x));
// }