/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:28:18 by iorins            #+#    #+#             */
/*   Updated: 2017/12/22 17:28:19 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	while (len > 0)
	{
		((unsigned char*)dst)[len - 1] = ((unsigned char*)src)[len - 1];
		len--;
	}
	return (dst);
}
