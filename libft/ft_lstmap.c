/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:37:42 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/23 17:46:58 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_el;
	t_list *adress;

	if (!lst || !f || !del)
		return (NULL);
	new_el = NULL;
	adress = new_el;
	while (lst)
	{
		if (!new_el = malloc(sizeof(t_list)))
		{
			del(new_el);
			break ;
		}
		new_el->content = f(lst->content);
		lst = lst->next;
		new_el = new_el->next;
	}
	return (adress);
}
