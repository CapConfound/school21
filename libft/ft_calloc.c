/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:33:55 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/09 16:38:59 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_calloc(size_t num, size_t size)
{
	int *arr;

	arr = malloc(size * num);
	if (!arr || !size)
		return (NULL);
	return (arr);
}