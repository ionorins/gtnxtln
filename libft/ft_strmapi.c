/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:24:17 by iorins            #+#    #+#             */
/*   Updated: 2017/12/22 17:24:17 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*r;
	unsigned int	i;
	unsigned int	len_s;

	r = NULL;
	if (s != NULL)
	{
		len_s = ft_strlen(s);
		r = ft_strnew(len_s);
		if (r != NULL)
		{
			i = 0;
			while (i < len_s)
			{
				r[i] = f(i, s[i]);
				i++;
			}
		}
	}
	return (r);
}
