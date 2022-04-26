NAME	=	megaphone

CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
GCC		=	$(CC) $(FLAGS)

SRCS	=	megaphone.cpp

all: $(NAME)

$(NAME):
		$(GCC) $(SRCS) -o $(NAME)

clean:
		rm $(NAME)

fclean: clean

re: fclean all
	