NAME = libft.a
SRCS =  ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c \
		

OBJS = ${SRCS:.c=.o}
FLAGS = -Wall -Wextra -Werror
CC = cc
AR = ar rc
RM = rm -f

.c.o: ${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:${OBJS} 
	${AR} ${NAME} ${OBJS} 

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re -Wall -Wextra -Werror