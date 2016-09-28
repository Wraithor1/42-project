/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/30 11:02:49 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/31 08:22:47 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_uitoa(unsigned int n)
{
	unsigned int	temp;
	int				index;
	char			*a;

	temp = n;
	index = 0;
	while (temp >= 1)
	{
		temp /= 10;
		index++;
	}
	a = (char *)malloc((index + 1) * sizeof(*a));
	a[index] = '\0';
	while (n >= 1)
	{
		a[--index] = (n % 10) + 48;
		n /= 10;
	}
	return (a);
}
