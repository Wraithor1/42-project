/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 07:50:32 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/14 10:13:02 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int i;
	int found;

	found = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			found = 1;
			break ;
		}
		i++;
	}
	if (found)
		return ((char *)(s + i - 1));
	else if (s[i] == c)
		return ((char *)(s + i));
	else
		return (NULL);
}
