/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:21:14 by iorins            #+#    #+#             */
/*   Updated: 2017/12/22 17:21:14 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		r;
	size_t	i;
	int		diff;

	diff = 0;
	r = 0;
	i = 0;
	while (diff == 0 && i < n)
	{
		if (((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
		{
			r = ((unsigned char*)s1)[i] - ((unsigned char*)s2)[i];
			diff = 1;
		}
		i++;
	}
	return (r);
}
