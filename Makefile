NAME		=	push_swap

SRCS_DIR	=	srcs
SRCS		=	${SRCS_DIR}/init.c \
				${SRCS_DIR}/quick_sort.c \
				${SRCS_DIR}/searching.c \
				${SRCS_DIR}/validate.c \
				${SRCS_DIR}/push_swap.c \
				${SRCS_DIR}/utils.c \
				${SRCS_DIR}/rotates1.c

OBJS		=	${SRCS:.c=.o}

LIBFT_DIR	=	./libft
LIBFT		=	${LIBFT_DIR}/libft.h

CC			=	gcc
RM			=	rm -rf
FLAGS		=	-Wall -Werror -Wextra