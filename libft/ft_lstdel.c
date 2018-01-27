/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:27:56 by iorins            #+#    #+#             */
/*   Updated: 2017/12/22 17:27:59 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*next;

	current = *alst;
	next = current->next;
	while (current->next != NULL)
	{
		ft_lstdelone(&current, del);
		current = next;
		next = current->next;
	}
	ft_lstdelone(&current, del);
	*alst = NULL;
}
