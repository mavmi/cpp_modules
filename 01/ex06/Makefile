NAME			=	karen_filter

CC				=	clang++
FLAGS			=	-Wall -Wextra -Werror -std=c++98
GCC             =	$(CC) $(FLAGS)

SRCS			=	main.cpp Karen.cpp
HDRS			=	Karen.hpp
OBJS			=	$(SRCS:.cpp=.o)

all: $(NAME)

%.o:	 	%.cpp $(HDRS)
			$(GCC) -c -o $@ $<

$(NAME):	$(OBJS)
			$(GCC) $(OBJS) -o $(NAME)

clean:
			rm $(OBJS)

fclean:		clean
			rm -f $(NAME)

re: fclean all