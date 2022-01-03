OUT		=	ex02
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
SRCS	=	main.cpp\
			ClapTrap.cpp\
			ScavTrap.cpp\
			FragTrap.cpp
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
