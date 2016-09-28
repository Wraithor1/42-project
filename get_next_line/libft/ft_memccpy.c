/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 13:09:30 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/10 10:13:56 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int			i;
	char		*ptr_d;
	const char	*ptr_s;
	int			found;

	i = 0;
	found = 0;
	while (i < n)
	{
		ptr_d = dst + i;
		ptr_s = src + i;
		if (*ptr_d == c)
		{
			found = 1;
			break ;
		}
		else
			*ptr_d = *ptr_s;
		i++;
	}
	if (found)
		return (dst + i);
	else
		return (NULL);
}
