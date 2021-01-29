# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/29 20:14:59 by jwon              #+#    #+#              #
#    Updated: 2021/01/29 20:15:11 by jwon             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= iter

SRCS	= main.cpp

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
