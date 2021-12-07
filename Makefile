# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 15:21:04 by bschwitz          #+#    #+#              #
#    Updated: 2021/12/06 15:51:37 by bschwitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_printf.c \
			  ft_putchar.c \
			  ft_putnbr.c \
			  ft_putstr.c \
			  ft_strlen.c \
			  ft_putunsignednbr.c \
			  ft_hex.c \
			  ft_ptrhex.c


OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a

CC			= gcc ${CFLAGS}

RM			= rm -f

CFLAGS		= -Wall -Werror -Wextra

all:		${NAME}

${NAME}:	${OBJS}
			ar cr ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
