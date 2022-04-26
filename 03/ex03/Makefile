NAME	=	diamond_trap

CC		=	clang++
FLAGS	=	-Wshadow -Wno-shadow -Wall -Wextra -Werror -std=c++98
GCC		=	$(CC) $(FLAGS)

SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
HDRS	=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
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
