NAME	=	phonebook

CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
GCC		=	$(CC) $(FLAGS)

SRCS	=	PhoneBook.cpp Contact.cpp main.cpp
HDRS	=	PhoneBook.hpp Contact.hpp
OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)

%.o:	%.cpp $(HDRS)
		$(GCC) -c -o $@ $<

$(NAME):	$(OBJS) $(HDRS)
			$(GCC) $(OBJS) -o $(NAME)

clean:
		rm $(OBJS)

fclean:	clean
		rm -f $(NAME)

re: fclean all
	