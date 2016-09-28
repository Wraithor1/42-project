/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 11:06:49 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/10 11:46:21 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int			i;
	int			result;
	const char	*ptr1;
	const char	*ptr2;

	i = 0;
	result = 0;
	ptr1 = s1 + i;
	ptr2 = s2 + i;
	while (*ptr1 != '\0' && i < n)
	{
		if (*ptr1 - *ptr2 != 0)
		{
			result = *ptr1 - *ptr2;
			break ;
		}
		i++;
		ptr1 = s1 + i;
		ptr2 = s2 + i;
	}
	if (*ptr1 == '\0' && *ptr2 != '\0' && i < n)
		result = *ptr1 - *ptr2;
	return (result);
}
