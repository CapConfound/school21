/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:34:47 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/19 18:36:22 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *elem;

	elem = NULL;
	if (!malloc(sizeof(t_list)))
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
