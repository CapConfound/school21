/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 12:37:57 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/14 20:44:23 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t count)
{
	char *s;
	char *d;
	size_t i;

	s = (char *)src;
	d = (char *)dest;
	i = -1;
	// puts(d);
	if (!count)
		return (NULL);
	while (++i < count)
	{
		d[i] = s[i];
		if (s[i] == (char)ch)
			return (d);
	}
	// putchar('\n');
	return (NULL);
}
// int main ()
// {
// 	char src[] = "test basic du memccpy !";
// 	char buff1[22];

// 	__builtin___memset_chk (buff1, 0, sizeof(buff1), __builtin_object_size (buff1, 0));
// 	char *r1 = __builtin___memccpy_chk (buff1, src, 'm', 22, __builtin_object_size (buff1, 0));
// 	char *r2 = ft_memccpy(buff1, src, 'm', 22);
// 	if (r1 != r2)
// 	{
// 		puts(r1);
	
// 		puts(r2);
	
// 		puts("fail");
// 	}
// 	r1 = __builtin___memccpy_chk ("", src, 'm', 0, __builtin_object_size ("", 0));
// 	r2 = ft_memccpy("", src, 'm', 0);
// 	puts(r1);
	
// 	puts(r2);
// }
