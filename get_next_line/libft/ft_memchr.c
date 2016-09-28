/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 08:52:44 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/11 08:16:44 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int			i;
	int			found;
	const char	*ptr;

	i = 0;
	while (i < n)
	{
		ptr = s + i;
		if (*ptr == c)
		{
			found = 1;
			break ;
		}
		i++;
	}
	if (found)
		return ((void *)ptr);
	else
		return (NULL);
}
