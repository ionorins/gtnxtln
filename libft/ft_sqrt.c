/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:23:43 by iorins            #+#    #+#             */
/*   Updated: 2017/12/22 17:23:43 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_sqrt(long nr)
{
	long	r;

	if (nr < 1)
		return (0);
	if (nr == 1)
		return (1);
	r = 1;
	while (r * r < nr)
		r++;
	return (r);
}
