OUT		=	ex01
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
SRCS	=	main.cpp\
			Animal.cpp\
			Cat.cpp\
			Dog.cpp\
			Brain.cpp
OBJS	=	${SRCS:.cpp=.o}

all		:	${OUT}

.cpp.o	:
	@${CC} ${CFLAGS} -c ${<} -o ${<:.cpp=.o} 

${OUT}	:	${OBJS}
		@${CC} ${CFLAGS} -o ${OUT} ${OBJS}

clean	:
		@rm -rf ${OBJS}

fclean	:	clean
		@rm -rf ${OUT}

re		:	fclean all

.PHONY	:	all clean fclean re
