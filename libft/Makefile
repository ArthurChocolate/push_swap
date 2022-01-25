# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naqua <naqua@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/22 14:20:56 by naqua             #+#    #+#              #
#    Updated: 2022/01/25 12:37:13 by naqua            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Werror -Wextra -I. -c

SRCS 	= ft_atoi.c \
		ft_error.c \
		ft_intcpy.c \
		ft_split.c \
		ft_strlen.c \

OBJS 	= ${SRCS:.c=.o}

LIBC	=	ar rcs

HEADER	=	libft.h

RM		=	rm -rf

all: ${NAME}

${NAME}: ${OBJS} ${HEADER}
	${LIBC} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
