/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 07:46:54 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/14 10:16:16 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t ft_strlcat(char *s1, const char *s2, size_t size)
{
	int len;
	int i;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0' && i < size)
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return ((len + i - 1));
}
