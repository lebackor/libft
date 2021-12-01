
SRCS	=	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strnstr.c

OBJS	=	${SRCS:.c=.o}

CC	=	gcc

CFLAGS	=	-Wall -Werror -Wextra

NAME = libft.a

.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME} :	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean :
		rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
