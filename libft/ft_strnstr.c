/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:28:46 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/15 23:15:47 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    
}
// {
//     unsigned char *buf;

//     buf = (unsigned char *)little;
//     while (big < (big + len))
//     {
//         buf = (unsigned char *)little;
//         while (buf < (buf + ft_strlen((char *)little)))
//         {
//             if (*buf == *little)
//                 {
//                     buf++;
//                     little++;
//                 }
//             else
//                 break;
//         }
//         return ((char *)buf);
//     }
//     return (NULL);
// }

// char    *ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	int blen;
// 	int llen;
// 	int i;
// 	int j;

// 	blen = ft_strlen(big);
// 	llen = ft_strlen(little);

// 	if (!little)
// 		return (big);
// 	i = -1;
// 	while (i < len)
// 	{
// 		j = -1;
// 		while (big[++i] != little[++j])
// 			if (j == llen - 1)
// 				return (little);
// 	}


// 	return (NULL); // если строка не найдена
// }

// int main()
// {
//     printf("%s\n", ft_strnstr("absklsadl\0", "ls\0", 10));
//     return 0;
// }