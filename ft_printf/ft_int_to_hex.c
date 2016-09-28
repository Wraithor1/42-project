/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/30 11:12:13 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/30 12:08:53 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	itoh(int n)
{
	char c;

	if (n >= 0 && n <= 9)
		c = n + 48;
	else if (n == 10)
		c = 'a';
	else if (n == 11)
		c = 'b';
	else if (n == 12)
		c = 'c';
	else if (n == 13)
		c = 'd';
	else if (n == 14)
		c = 'e';
	else
		c = 'f';
	return (c);
}

char		*ft_int_to_hex(unsigned int n)
{
	unsigned int	temp;
	int				index;
	char			*a;

	temp = n;
	index = 0;
	while (temp >= 1)
	{
		temp /= 16;
		index++;
	}
	a = (char *)malloc((index + 1) * sizeof(*a));
	a[index] = '\0';
	while (n >= 1)
	{
		a[--index] = itoh(n % 16);
		n /= 16;
	}
	return (a);
}
