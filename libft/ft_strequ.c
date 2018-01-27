/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:24:03 by iorins            #+#    #+#             */
/*   Updated: 2017/12/22 17:24:03 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		r;

	r = 0;
	if (s1 != NULL && s2 != NULL)
	{
		if (ft_strcmp(s1, s2) == 0)
			r = 1;
	}
	return (r);
}
