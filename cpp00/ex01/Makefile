# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seung-eun <seung-eun@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/28 13:22:58 by seung-eun         #+#    #+#              #
#    Updated: 2021/10/09 17:10:48 by seung-eun        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUT		=	phonebook
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	phonebook.cpp\
			contact.cpp
OBJS	=	${SRCS:.cpp=.o}

all		:	${OUT}

.cpp.o	:
	@${CC} ${CFLAGS} -c ${<} -o ${<:.cpp=.o} 

${OUT}	:
		@${CC} ${CFLAGS} -o ${OUT} ${SRCS}

clean	:
		@rm -rf {OBJS}

fclean	:	clean
		@rm -rf ${OUT}

re		:	fclean all

.PHONY	:	all clean fclean re