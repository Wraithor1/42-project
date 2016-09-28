/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 09:46:27 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/18 12:18:59 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char *str;

	str = malloc( (ft_strlen(s) + 1) * sizeof (*s) );
	ft_strcpy(str, s);
	return (str);
}
