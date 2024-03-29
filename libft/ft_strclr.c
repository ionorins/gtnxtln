/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:23:52 by iorins            #+#    #+#             */
/*   Updated: 2017/12/22 17:23:52 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	len;

	if (s != NULL)
	{
		len = ft_strlen(s);
		while (len > 0)
		{
			len--;
			s[len] = '\0';
		}
	}
}
