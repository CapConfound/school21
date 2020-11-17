/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:59:42 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/17 13:13:20 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i, j;
	char *res;


	i = j = 0;
	while(ft_strchr(s1[i], set))
		i++;
	res = malloc(sizeof(char) * i + 1);
	if(!res)
		return(NULL);
	while (s1)
	{
		res[j++] = s1[i++];
	}

}

int main()
{
	puts(ft_strtrim("   djsk", " "));
}