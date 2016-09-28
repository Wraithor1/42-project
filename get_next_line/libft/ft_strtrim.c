/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 10:14:29 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/12 12:08:50 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int			len;
	char const	*end;
	char		*str;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	
	len = ft_strlen(s);
	end = s + len - 1;
	while (end > str && (*end == ' ' || *end == '\t' || *end == '\n'))
	{
		end--;
		len--;
	}
	len++;
	str = (char *)malloc((len + 1) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	ft_strncpy(str, s, len);
	str[len] = '\0';
	return (str);
}
