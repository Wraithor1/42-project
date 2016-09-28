/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 08:17:06 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/11 08:33:03 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int found;

	i = 0;
	found = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			found = i;
		i++;
	}
	if (found)
		return ((char *)(s + found));
	else if (c == '\0')
		return ((char *)(s + i));
	else
		return (NULL);
}
