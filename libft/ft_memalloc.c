/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:21:07 by iorins            #+#    #+#             */
/*   Updated: 2017/12/22 17:21:07 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*r;
	size_t	i;

	r = (void*)malloc(size);
	if (r != NULL)
	{
		i = 0;
		while (i < size)
		{
			((char*)r)[i] = 0;
			i++;
		}
	}
	return (r);
}
