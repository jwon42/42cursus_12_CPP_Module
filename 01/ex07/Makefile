NAME	= replace

SRCS	= main.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= clang++

FLAGS	= -Wall -Wextra -Werror

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
