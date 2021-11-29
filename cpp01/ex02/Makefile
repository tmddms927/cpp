# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 18:57:23 by seungoh           #+#    #+#              #
#    Updated: 2021/11/29 18:58:38 by seungoh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUT		=	Moar_brainz!
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp\
			Zombie.cpp\
			ZombieHorde.cpp
OBJS	=	${SRCS:.cpp=.o}

all		:	${OUT}

.cpp.o	:
	@${CC} ${CFLAGS} -c ${<} -o ${<:.cpp=.o} 

${OUT}	:
		@${CC} ${CFLAGS} -o ${OUT} ${OBJS} ${SRCS}

clean	:
		@rm -rf {OBJS}

fclean	:	clean
		@rm -rf ${OUT}

re		:	fclean all

.PHONY	:	all clean fclean re