/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 08:24:56 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/10 10:14:28 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int			i;
	char		*ptr_d;
	const char	*ptr_s;

	i = 0;
	while (i < n)
	{
		ptr_d = dst + i;
		ptr_s = src + i;
		*ptr_d = *ptr_s;
		i++;
	}
	return (dst);
}
