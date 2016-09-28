/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 08:48:28 by tlouw             #+#    #+#             */
/*   Updated: 2016/06/03 14:19:23 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	convert_argument(va_list args, const char *format, int i)
{
	t_spec	con;
	char	*spec;
	int		*i_ptr;

	i_ptr = &i;
	i++;
	con.flags = get_flags(format, i);
	i += ft_strlen(con.flags);
	con.width = get_width(format, i);
	con.precision = get_precision(format, i);
	con.length = get_length(format, i);
	spec = get_spec(args, con, format, i_ptr);
	ft_putstr(spec);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;

	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i = convert_argument(args, format, i);
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (1);
}
