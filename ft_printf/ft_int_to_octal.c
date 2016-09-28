/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_octal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/30 11:50:51 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/30 12:04:42 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_int_to_octal(unsigned int n)
{
	unsigned int	temp;
	int				index;
	char			*a;

	temp = n;
	index = 0;
	while (temp >= 1)
	{
		temp /= 8;
		index++;
	}
	a = (char *)malloc((index + 1) * sizeof(*a));
	a[index] = '\0';
	while (n >= 1)
	{
		a[--index] = (n % 8) + 48;
		n /= 8;
	}
	return (a);
}
