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

int	get_next_line(const int fd, char **line)
{
    char *c, *aux;
    t_list *crt, *first, *test;
    unsigned i, status;

    c = (char*)malloc(BUFF_SIZE);
    status = read(fd, c, BUFF_SIZE);
    if (status == 0)
        return (0);
    //printf("%i:", status);
    first = ft_lstnew(c, BUFF_SIZE);
    //ft_putchar(*first->content);
    crt = first;
    do
    {
        status = read(fd, c, BUFF_SIZE);
        if (status == 0)
            return (0);
        crt->next = ft_lstnew(c, BUFF_SIZE);
        //ft_putstr("tesh");
        //ft_putchar(*crt->content);
        crt = crt->next;
    } while(*c != '\n');
    //ft_putchar('0' + ft_lstcount(first));
    *line = (char*)malloc((ft_lstcount(first) + 1) * BUFF_SIZE);
    crt = first;
    i = 0;
    while (crt)
    {
        //ft_putchar(*crt->content);
        (*line)[i++] = *crt->content;
        crt = crt->next;
    }
    (*line)[i] = '\0';
    //ft_putstr(*line);
    free(c);
    //already_read += ft_lstcount(first) + 1;
    //ft_putchar("ijdhfiosdjfhos");
	return (status);
}
