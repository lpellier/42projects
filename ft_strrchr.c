/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:38:40 by lpellier          #+#    #+#             */
/*   Updated: 2019/11/18 11:42:42 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			len;
	char		*test;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	test = (char *)s + len;
	while (*test != c)
	{
		if (test == s)
			return (NULL);
		test--;
	}
	return (test);
}
