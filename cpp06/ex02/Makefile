OUT		=	ex02
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -fsanitize=address
SRCS	=	main.cpp\
			function.cpp\
			A.cpp\
			B.cpp\
			C.cpp\
			Base.cpp
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
