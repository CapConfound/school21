NAME	= libft.a
SRCS	= *.c
FLAGS	= -c -g -Werror -Wextra -Wall

${NAME}:
		gcc ${FLAGS} ${SRCS}
		ar rc ${NAME} *.o

all:	${NAME}

clean:
			rm -f *.o
			
fclean:		clean
			rm -f ${NAME}
	
re:		fclean all