/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:37:42 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/24 20:13:26 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_el;
	t_list *adress;

	if (!f)
		return (NULL);
	new_el = NULL;
	adress = new_el;
	while (lst)
	{
		if (!(new_el = malloc(sizeof(t_list))))
		{
			ft_lstclear(&adress, del);
			break ;
		}
		new_el->content = f(lst->content);
		lst = lst->next;
		ft_lstadd_back(&adress, new_el);
	}
	return (adress);
}
