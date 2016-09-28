/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_spec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 15:04:40 by tlouw             #+#    #+#             */
/*   Updated: 2016/06/03 12:10:41 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		move_index(const char *format, int i)
{
	char	c;

	while ((format[i] >= '0' && format[i] <= '9') || format[i] == '.')
		i++;
	c = format[i];
	while (c == 'h' || c == 'l' || c == 'j' || c == 'z')
		c = format[++i];
	return (i);
}

char	*get_spec_int(va_list args, t_spec con, char c, int i)
{
	int		arg;
	char	*str;

	arg = va_arg(args, int);
	if (c == 'd' || c == 'i' || c == 'D')
		str = ft_itoa(arg);
	else if (c == 'o' || c == 'O')
	{
		str = ft_int_to_octal(arg);
		if (ft_contains(con.flags, '#'))
			str = ft_strjoin("0", str);
	}
	else if (c == 'x' || c == 'X')
	{
		str = ft_int_to_hex(arg);
		if (ft_contains(con.flags, '#'))
			str = ft_strjoin("0x", str);
		if (c == 'X')
			str = ft_strtoupper(str);
	}
	else
		str = ft_uitoa(arg);
	if (ft_contains(con.flags, '+') && arg > 0)
		str = ft_strjoin("+", str);
	return (str);
}

char	*get_spec_other(va_list args, t_spec con, char c, int i)
{
	char	*str;
	char	ch;
	void	*ptr;
	int		a;

	if (c == 's' || c == 'S')
		str = va_arg(args, char *);
	else if (c == 'c' || c == 'C')
	{
		ch = va_arg(args, int);
		str = malloc(2 * sizeof(*str));
		str[0] = ch;
		str[1] = '\0';
	}
	else
	{
		ptr = va_arg(args, void *);
		a = (int)ptr;
		str = ft_int_to_hex(a);
		str = ft_strjoin("0x7fff", str);
	}
	return (str);
}

char	*str_pad(char *s1, t_spec con)
{
	char	*s2;
	char	*str;
	int		len;
	char	padding;
	int		i;

	padding = ' ';
	len = ft_strlen(s1);
	if (len < con.width)
	{
		s2 = malloc((con.width - len + 1) * sizeof(*s2));
		if (ft_contains(con.flags, '0'))
			padding = '0';
		s2[con.width - len] = '\0';
		i = 0;
		while (i < con.width - len)
			s2[i++] = padding;
		if (ft_contains(con.flags, '-'))
			str = ft_strjoin(s1, s2);
		else
			str = ft_strjoin(s2, s1);
		return (str);
	}
	return (s1);
}

char	*get_spec(va_list args, t_spec con, const char *format, int *i)
{
	int		j;
	char	c;
	char	*str;

	j = *i;
	j = move_index(format, j);
	*i = j;
	c = format[j];
	if (c == 'd' || c == 'i' || c == 'o' || c == 'u' || c == 'x' || c == 'X')
		str = get_spec_int(args, con, c, j);
	else if (c == 's' || c == 'S' || c == 'p' || c == 'c' || c == 'C')
		str = get_spec_other(args, con, c, j);
	else if (c == 'O' || c == 'U' || c == 'D')
		str = get_spec_int(args, con, c, j);
	else if (c == '%')
	{
		str = malloc(2 * sizeof(*str));
		str[0] = '%';
		str[1] = '\0';
	}
	str = str_pad(str, con);
	return (str);
}
