NAME	=	account

CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
GCC		=	$(CC) $(FLAGS)

SRCS	=	Account.cpp tests.cpp
OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)

%.o:	%.cpp $(HDRS)
		$(GCC) -c -o $@ $<

$(NAME): $(OBJS) $(HDRS)
		$(GCC) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all
	