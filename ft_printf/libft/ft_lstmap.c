/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:37:42 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/26 20:58:03 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_el;
	t_list *adress;

	if (!lst || !f)
		return (NULL);
	adress = NULL;
	while (lst)
	{
		new_el = ft_lstnew(f(lst->content));
		if (!new_el)
		{
			ft_lstclear(&adress, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&adress, new_el);
	}
	return (adress);
}
