/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 08:38:34 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/18 12:40:19 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int found;
	int len;

	i = 0;
	len = ft_strlen(little);
	while (big[i + len] != '\0')
	{
		found = 1;
		j = 0;
		while (little[j] != '\0')
		{
			if (big[i + j] != little[j])
				found = 0;
			j++;
		}
		if (found)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
