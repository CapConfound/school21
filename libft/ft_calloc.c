/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:33:55 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/11 13:02:38 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_calloc(size_t num, size_t size)
{
	int *arr;

	arr = (void *)malloc(size * num);
	if (!arr)
		return (NULL);
	ft_bzero(arr, num);
	return (arr);
}

// int main()
// {
// 	int size = 8539;

// 	void * d1 = ft_calloc(size, sizeof(int));
// 	void * d2 = calloc(size, sizeof(int));
// 	if (memcmp(d1, d2, size * sizeof(int)))
// 		puts("-1");
// 	free(d1);
// 	free(d2);
// 	puts("1");
// }
