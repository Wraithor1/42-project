/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:18:02 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/13 10:53:09 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		temp;
	int		index;
	char	*a;
	
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
		a[index - 1] = (n % 10) + 48;
		n /= 10;
		index--;
	}
	return (a);
}
