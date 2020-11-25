NAME		= libft.a
SRCS		= ft_isalpha.c \
			ft_memmove.c \
			ft_split.c \
			ft_strlen.c \
			ft_substr.c \
			ft_isascii.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strmapi.c \
			ft_tolower.c \
			ft_atoi.c \
			ft_isdigit.c \
			ft_memccpy.c \
			ft_putchar_fd.c \
			ft_strdup.c \
			ft_strncmp.c \
			ft_toupper.c \
			ft_bzero.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_putendl_fd.c \
			ft_strjoin.c \
			ft_strnstr.c \
			ft_calloc.c \
			ft_itoa.c \
			ft_memcmp.c \
			ft_putnbr_fd.c \
			ft_strlcat.c \
			ft_strrchr.c \
			ft_isalnum.c \
			ft_memcpy.c \
			ft_putstr_fd.c \
			ft_strlcpy.c \
			ft_strtrim.c \

BONUS		= *.c

LIB			= ar rc ${NAME}

FLAGS		= gcc -c -g -Werror -Wextra -Wall

$(NAME):
			${FLAGS} ${SRCS}
			${LIB} *.o

all:		${NAME}

bonus:
			${FLAGS} ${BONUS}
			${LIB} *.o

clean:
			rm -f *.o
			
fclean:		clean
			rm -f ${NAME}

c:			fclean

re:			fclean all

.PHONY:		all clean fclean re