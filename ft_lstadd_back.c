/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 13:44:26 by lpellier          #+#    #+#             */
/*   Updated: 2019/11/18 16:05:43 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*current;

	if (!(alst == NULL && new == NULL))
	{
		if (*alst == NULL || *alst == 0)
			*alst = new;
		else
		{
			current = *alst;
			while (current->next)
				current = current->next;
			current->next = new;
		}
	}
}
