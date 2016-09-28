/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 09:03:37 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/18 12:40:37 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;
	int found;
	int n;

	i = 0;
	n = ft_strlen(little);
	while (big[i + n] != '\0' && i < len)
	{
		found = 1;
		j = 0;
		while (little[j] != '\0')
		{
			if (big[i +j] != little[j])
				found = 0;
			j++;
		}
		if (found)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
