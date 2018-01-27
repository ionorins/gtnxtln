/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 17:03:34 by iorins            #+#    #+#             */
/*   Updated: 2018/01/27 16:55:01 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list *first = NULL;

int	get_next_line(const int fd, char **line)
{
	char *c;
	t_list *crt;
	int i;

	crt = first;
	c = (char*)malloc(1);
	do
	{
		read(fd, c, BUFF_SIZE);
		crt = ft_lstnew(c, BUFF_SIZE);
		crt = crt->next;
	} while (*c != '\n');

	c = (char*)malloc(ft_lstcount(first) * sizeof(char));
	crt = first;
	i = 0;

	while (crt != NULL)
	{
		c[i++] = *(crt->content);
		crt = crt->next;
	}

	*line = c; 

	return (1);
}
