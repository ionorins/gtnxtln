/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:23:45 by iorins            #+#    #+#             */
/*   Updated: 2017/12/22 17:23:45 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcap(char *str)
{
	str = ft_strtolower(str);
	str[0] = ft_toupper(str[0]);
	return (str);
}
