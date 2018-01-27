/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 17:21:02 by iorins            #+#    #+#             */
/*   Updated: 2018/01/27 16:39:57 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*el;

	el = (t_list*)malloc(sizeof(*el));
	if (el != NULL)
	{
		if (content == NULL)
		{
			el->content = NULL;
			el->content_size = 0;
		}
		else
		{
			el->content = (char*)malloc(content_size);
			if (el->content == NULL)
			{
				ft_memdel((void**)&el);
				return (NULL);
			}
			ft_memcpy(el->content, content, content_size);
			el->content_size = content_size;
		}
		el->next = NULL;
	}
	return (el);
}
