# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 10:12:31 by seungoh           #+#    #+#              #
#    Updated: 2021/11/29 19:01:19 by seungoh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUT		=	BraiiiiiiinnnzzzZ
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp\
			Zombie.cpp\
			newZombie.cpp\
			randomChump.cpp
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