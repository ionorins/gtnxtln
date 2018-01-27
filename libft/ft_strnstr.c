/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:24:28 by iorins            #+#    #+#             */
/*   Updated: 2017/12/22 17:24:28 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;

	if (little[0] == '\0')
		return ((char*)big);
	if (len == 0)
		return (0);
	len_little = ft_strlen(little);
	i = 0;
	while (big[i] != '\0' && i < len - len_little + 1)
	{
		j = 0;
		while (big[i + j] &&
				i + j < len && little[j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return (&((char*)big)[i]);
		i++;
	}
	return (NULL);
}
