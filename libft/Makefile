# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 14:21:15 by sayar             #+#    #+#              #
#    Updated: 2021/11/23 12:11:10 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

SRC = ft_atoi.c ft_itoa.c ft_bzero.c ft_calloc.c ft_strmapi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_striteri.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJ = $(patsubst %.c, %.o, ${SRC})

BONUS = $(patsubst %.c, %.o, ${BONUS_SRC})

all : ${NAME}

$(NAME) : ${OBJ}
	ar cr ${NAME} ${OBJ} 

%.o: %.c libft.h
	${CC} -c ${CFLAGS} $<

.PHONY : all clean fclean re

clean :
	rm -f ${OBJ} ${BONUS}

fclean : clean
	rm -f ${NAME}

re : fclean all

bonus : $(NAME) ${BONUS}
	ar cr ${NAME} ${BONUS}
