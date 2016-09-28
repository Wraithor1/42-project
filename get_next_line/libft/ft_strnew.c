/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 13:50:36 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/14 10:19:35 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char *) * size);
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
