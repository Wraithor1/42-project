/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 10:23:36 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/18 12:41:17 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] - s2[i] != 0)
		{
			result = s1[i] - s2[i];
			break;
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0' && i < n)
		result = s1[i] - s2[i];
	return (result);
}
