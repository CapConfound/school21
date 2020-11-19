/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:34:47 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/19 17:38:02 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  ft_lstnew(void *content)
{
    t_list elem;

    if (!malloc(sizeof(t_list)))
        return (NULL);
    elem.content = content;
    elem.next = NULL;
    return (elem);
}
