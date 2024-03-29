/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:24:41 by iorins            #+#    #+#             */
/*   Updated: 2017/12/22 17:24:41 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*r;
	size_t	a;
	size_t	b;

	r = NULL;
	if (s != NULL)
	{
		b = ft_strlen(s);
		b--;
		while (b > 0 && (s[b] == ' ' || s[b] == '\n' || s[b] == '\t'))
			b--;
		a = 0;
		while (a < b && (s[a] == ' ' || s[a] == '\n' || s[a] == '\t'))
			a++;
		if (a != b)
		{
			r = ft_strsub(s, a, b - a + 1);
		}
		else
			r = ft_strnew(0);
	}
	return (r);
}
