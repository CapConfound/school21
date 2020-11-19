/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:33:55 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/19 15:52:02 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	int	*arr;

	arr = (void *)malloc(size * num);
	if (!arr)
		return (NULL);
	ft_bzero(arr, num);
	return (arr);
}
