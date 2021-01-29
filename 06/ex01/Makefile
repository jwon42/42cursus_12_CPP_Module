# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/28 01:46:47 by jwon              #+#    #+#              #
#    Updated: 2021/01/28 18:50:37 by jwon             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= datastruct

SRCS	= main.cpp DataStruct.cpp

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
