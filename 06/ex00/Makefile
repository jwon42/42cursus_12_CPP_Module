# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/26 17:12:13 by jwon              #+#    #+#              #
#    Updated: 2021/01/28 18:50:30 by jwon             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= convert

SRCS	= main.cpp Conversion.cpp

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
