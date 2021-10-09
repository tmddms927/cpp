# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seung-eun <seung-eun@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/28 12:29:50 by seung-eun         #+#    #+#              #
#    Updated: 2021/10/08 13:51:04 by seung-eun        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUT		=	megaphone
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRC		=	megaphone.cpp
OBJS	=	${SRC:.cpp=.o}

all		:	${OUT}

.cpp.o	:
	@${CC} ${CFLAGS} -c ${<} -o ${<:.cpp=.o} 

${OUT}	:
		@${CC} ${CFLAGS} -o ${OUT} ${SRC}

clean	:
		@rm -rf {OBJS}

fclean	:	clean
		@rm -rf ${OUT}

re		:	fclean all

.PHONY	:	all clean fclean re