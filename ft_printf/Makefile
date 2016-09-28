# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlouw <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/23 09:59:17 by tlouw             #+#    #+#              #
#    Updated: 2016/06/03 08:50:04 by tlouw            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_int_to_octal.c ft_uitoa.c ft_printf.c get_spec.c ft_contains.c \
ft_printf_functions.c ft_int_to_hex.c ft_strtoupper.c libft/ft_putstr.c \
libft/ft_itoa.c libft/ft_strjoin.c libft/ft_strlen.c libft/ft_putchar.c

OBJS = ft_int_to_octal.o ft_uitoa.o ft_printf.o get_spec.o ft_contains.o \
ft_printf_functions.o ft_int_to_hex.o ft_strtoupper.o ft_putstr.o \
ft_itoa.o ft_strjoin.o ft_strlen.o ft_putchar.o

all: $(NAME)

$(NAME):
	gcc -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
