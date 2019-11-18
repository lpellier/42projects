/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:31:05 by lpellier          #+#    #+#             */
/*   Updated: 2019/11/12 12:40:05 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	size_t	totalsize;

	totalsize = (count * size);
	if (!(res = malloc(totalsize)))
		return (NULL);
	ft_bzero(res, totalsize);
	return (res);
}
