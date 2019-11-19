/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 10:27:41 by lpellier          #+#    #+#             */
/*   Updated: 2019/11/19 13:32:56 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *temp;
	t_list *list;

	if (lst != NULL && f != NULL)
	{
		if (!(list = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		while ((lst = lst->next))
		{
			if (!(temp = ft_lstnew((*f)(temp->content))))
			{
				ft_lstclear(&list, del);
				return (NULL);
			}
			ft_lstadd_back(&list, temp);
		}
		return (list);
	}
	return (NULL);
}
