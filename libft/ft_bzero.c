/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:10:40 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/19 19:43:16 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	char			*sequence;
	unsigned int	i;

	sequence = (char *)s;
	i = 0;
	while (i < n)
		sequence[i++] = 0;
	return (sequence);
}
