/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:49:15 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/01 17:02:09 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

int		ft_strlen(char *str)
{
	int chars;

	chars = 0;
	while (str[chars] != '\0')
	{
		chars++;
	}
	return (chars);
}
