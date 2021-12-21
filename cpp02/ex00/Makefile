# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/21 13:48:23 by marvin            #+#    #+#              #
#    Updated: 2021/12/21 13:48:23 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUT		=	Orthodox
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp\
			Fixed.cpp
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
