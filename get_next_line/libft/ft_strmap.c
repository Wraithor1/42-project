/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 09:10:45 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/14 10:17:29 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*str;

	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(*str));
	while (s[i] != '\0')
	{
		str[i] = (*f)(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
