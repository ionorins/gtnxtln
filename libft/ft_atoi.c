/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:07:34 by iorins            #+#    #+#             */
/*   Updated: 2017/12/22 17:26:50 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

int		ft_atoi(const char *str)
{
	int				sign;
	long long		value;

	sign = 1;
	value = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f' ||
			*str == '\v' || *str == '\r')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while ((*str <= '9') && (*str >= '0'))
	{
		if ((value > 922337203685477580) && (sign == 1))
			return (-1);
		if ((value < -922337203685477580) && (sign == -1))
			return (0);
		value = (value * 10) + sign * (*str++ - '0');
		if ((sign == 1) && (value < 0))
			return (-1);
		if ((sign == -1) && (value > 0))
			return (0);
	}
	return ((int)value);
}
