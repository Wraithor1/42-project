/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 11:19:13 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/26 09:41:19 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*get_flags(const char *format, int i)
{
	int		count;
	char	c;
	char	*flags;

	c = format[i];
	count = 0;
	while (c == '#' || c == '0' || c == '+' || c == ' ' || c == '-')
	{
		i++;
		count++;
		c = format[i];
	}
	flags = malloc((count + 1) * sizeof(*flags));
	i -= count;
	count = 0;
	c = format[i];
	while (c == '#' || c == '0' || c == '+' || c == ' ' || c == '-')
	{
		flags[count] = c;
		count++;
		i++;
		c = format[i];
	}
	flags[count] = '\0';
	return (flags);
}

int		get_width(const char *format, int i)
{
	int	width;

	width = 0;
	while (format[i] >= '0' && format[i] <= '9')
	{
		width *= 10;
		width += format[i] - '0';
		i++;
	}
	return (width);
}

int		get_precision(const char *format, int i)
{
	int precision;

	precision = 0;
	while (format[i] >= '0' && format[i] <= '9')
		i++;
	if (format[i] == '.')
	{
		i++;
		while (format[i] >= '0' && format[i] <= '9')
		{
			precision *= 10;
			precision += format[i] - '0';
			i++;
		}
	}
	return (precision);
}

char	*get_length(const char *format, int i)
{
	int		count;
	char	c;
	char	*length;

	while ((format[i] >= '0' && format[i] <= '9') || format[i] == '.')
		i++;
	c = format[i];
	count = 0;
	while (c == 'h' || c == 'l' || c == 'j' || c == 'z')
	{
		count++;
		c = format[++i];
	}
	length = malloc((count + 1) * sizeof(*length));
	i -= count;
	c = format[i];
	count = 0;
	while (c == 'h' || c == 'l' || c == 'j' || c == 'z')
	{
		length[count] = c;
		count++;
		c = format[++i];
	}
	length[count] = '\0';
	return (length);
}
