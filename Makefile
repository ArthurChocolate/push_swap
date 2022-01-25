# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naqua <naqua@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/27 15:35:35 by naqua             #+#    #+#              #
#    Updated: 2022/01/25 12:40:44 by naqua            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SRCS_DIR	=	srcs/
SRCS_FILES	=	init.c \
				quick_sort.c \
				searching.c \
				validate.c \
				push_swap.c \
				utils.c \
				little_sort.c \
				splitter.c \
				main_sort.c \
				actions_1.c \
				actions_2.c \
				actions_3.c \
				actions_4.c \

SRCS		=	${addprefix ${SRCS_DIR}, ${SRCS_FILES}}

OBJS		=	${SRCS:.c=.o}

LIBFT_DIR	=	./libft
LIBFT_PATH	=	${LIBFT_DIR}/libft.a

CC			=	gcc
RM			=	rm -rf
FLAGS		=	-Wall -Werror -Wextra

${NAME}: ${OBJS}
	${MAKE} -C ${dir ${LIBFT_PATH}}
	${CC} ${FLAGS} ${LIBFT_PATH} ${OBJS} -o ${NAME}

all: ${NAME}

%.o: %.c
	${CC} ${FLAGS} -c $< -o $@

clean:
	${MAKE} clean -C ${dir ${LIBFT_PATH}}
	${RM} ${OBJS}

fclean: clean
	${MAKE} fclean -C ${dir ${LIBFT_PATH}}
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
