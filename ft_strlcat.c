/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:12:18 by lpellier          #+#    #+#             */
/*   Updated: 2019/11/07 15:09:55 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	countd;
	size_t	counts;

	i = 0;
	countd = ft_strlen(dst);
	counts = ft_strlen(src);
	if (dstsize <= countd)
		counts += dstsize;
	else
		counts += countd;
	while (src[i] && countd + 1 < dstsize)
	{
		dst[countd] = src[i];
		countd++;
		i++;
	}
	dst[countd] = '\0';
	return (counts);
}
