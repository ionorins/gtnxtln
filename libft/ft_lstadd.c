/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:27:16 by iorins            #+#    #+#             */
/*   Updated: 2017/12/22 17:27:19 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	**old_start;

	old_start = alst;
	new->next = *alst;
	*alst = new;
}
