#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	{
		Bureaucrat bureaucrat("some cool bureaucrat", 1); 
		Bureaucrat bureaucrat_1("some bad bureaucrat", 100); 
		Form form("some form", 10, 12);
		std::cout << form << std::endl << std::endl;

		std::cout << form.getName() << std::endl;
		std::cout << form.getIsSigned() << std::endl;
		std::cout << form.getGradeToSign() << std::endl;
		std::cout << form.getGradeToExecute() << std::endl << std::endl;

		bureaucrat_1.signForm(form);
		std::cout << form.getIsSigned() << std::endl;

		bureaucrat.signForm(form);
		std::cout << form.getIsSigned() << std::endl;
	}
}
