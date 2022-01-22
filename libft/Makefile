# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naqua <naqua@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/22 14:20:56 by naqua             #+#    #+#              #
#    Updated: 2022/01/22 14:21:31 by naqua            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I. -c

SRCS 	= ft_atoi.c \
		ft_error.c \
		ft_intcpy.c \
		ft_split.c \
		ft_strlen.c

OBJS 	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) libft.h
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
