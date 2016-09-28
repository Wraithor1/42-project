/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:30:23 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/13 10:14:28 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*ptr_d;
	const char	*ptr_s;
	char		*str;

	i = 0;
	str = ft_strdup(dst);
	while (i < n)
	{
		ptr_d = dst + i;
		ptr_s = src + i;
		*ptr_d = *ptr_s;
		i++;
	}
	return (str);
}
