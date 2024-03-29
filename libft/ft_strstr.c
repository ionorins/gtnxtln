/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:24:33 by iorins            #+#    #+#             */
/*   Updated: 2017/12/22 17:24:33 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*r;
	size_t	i;
	int		is_done;
	size_t	len_little;

	r = NULL;
	if (little[0] == '\0')
		return ((char*)big);
	if (big[0] == '\0')
		return (NULL);
	len_little = ft_strlen(little);
	is_done = 0;
	i = 0;
	while (is_done == 0 && big[i] != '\0')
	{
		if (ft_strncmp(&big[i], little, len_little) == 0)
		{
			is_done = 1;
			r = &((char*)big)[i];
		}
		i++;
	}
	return (r);
}
