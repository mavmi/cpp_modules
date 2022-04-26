NAME	=	ex03

CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
GCC		=	$(CC) $(FLAGS)

SRCS	=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
HDRS	=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
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
