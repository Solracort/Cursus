# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 09:04:25 by cortiz-s          #+#    #+#              #
#    Updated: 2022/05/08 11:59:03 by cortiz-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_atoi.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
	   ft_isprint.c ft_memset.c ft_strlen.c ft_strlcat.c ft_strlcpy.c \
	   ft_strncmp.c ft_strnstr.c ft_strchr.c ft_strrchr.c ft_tolower.c \
	   ft_toupper.c ft_memchr.c ft_memcmp.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	   ft_split.c ft_itoa.c ft_strmapi.c
OBJS = ${SRCS:.c=.o}
FLAGS = -Wall -Wextra -Werror
CC = cc
AR = ar -rc
RM = rm -f
NAME = libft.a

.c.o: ${CC} ${FLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS} 
	${AR} ${NAME} ${OBJS} 
	
all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re -Wall -Wextra -Werror
