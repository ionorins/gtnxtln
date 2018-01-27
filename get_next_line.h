/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorins <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 17:03:43 by iorins            #+#    #+#             */
/*   Updated: 2018/01/27 17:15:54 by iorins           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <unistd.h>
# include "libft/libft.h"
# define BUFF_SIZE 1
# define MALLCHECK(x) if (!x) return (-1);

int get_next_line(const int fd, char **line);

#endif
