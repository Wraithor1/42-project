/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 11:12:26 by tlouw             #+#    #+#             */
/*   Updated: 2016/06/03 12:08:34 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct	s_spec {
	char	*flags;
	int		width;
	int		precision;
	char	*length;
}				t_spec;

char			*ft_uitoa(unsigned int n);
char			*ft_int_to_octal(unsigned int n);
char			*ft_int_to_hex(unsigned int n);
char			*ft_strtoupper(char *s);
char			*get_flags(const char *format, int i);
int				get_width(const char *format, int i);
int				get_precision(const char *format, int i);
char			*get_spec(va_list args, t_spec con, const char *format, int *i);
char			*get_length(const char *format, int i);
int				ft_contains(char *str, char c);
int				ft_printf(const char *format, ...);

#endif
