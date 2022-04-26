NAME	=	ex01

CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
GCC		=	$(CC) $(FLAGS)

SRCS	=	main.cpp span.cpp
HDRS	=	span.hpp
OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)

%.o:		%.cpp $(HDRS)
			$(GCC) -c -o $@ $<

$(NAME):	$(OBJS)
			$(GCC) $(OBJS) -o $(NAME)

clean:
			rm $(OBJS)

fclean:		clean
			rm -f $(NAME)

re: fclean all
