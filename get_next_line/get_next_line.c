/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 08:41:51 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/20 09:32:52 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include "libft/libft.h"

int		get_next_line(const int fd, char **line)
{
	int		ret;
	char	buf[2];
	char	*temp;

	*line = ft_strnew(1);
	while ((ret = read(fd, buf, 1)))
	{
		if (buf[0] == '\n')
			break ;
		else
		{
			temp = *line;
			buf[ret] = '\0';
			*line = ft_strjoin(*line, buf);
			free(temp);
		}
	}
	return (1);
}
