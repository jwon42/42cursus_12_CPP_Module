# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/29 10:52:48 by jwon              #+#    #+#              #
#    Updated: 2021/01/29 11:29:35 by jwon             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= identify

SRCS	= main.cpp \
			A.cpp \
			B.cpp \
			C.cpp \
			identify.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= clang++

FLAGS	= -std=c++98 -Wall -Wextra -Werror

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME) -I .

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
