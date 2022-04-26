#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
	{
		std::cout << std::endl << std::endl;

		Intern intern;
		Bureaucrat bureaucrat("Bob", 55);

		Form *form_1 = intern.makeForm("shrubbery request", "target");
		Form *form_2 = intern.makeForm("robotonomy request", "target");
		Form *form_3 = intern.makeForm("presidential request", "target");
		Form *form = intern.makeForm("bad request", "target");

		std::cout 
			<< form_1 << std::endl
			<< form_2 << std::endl
			<< form_3 << std::endl
			<< form << std::endl;

		std::cout << "***************************" << std::endl;		
		try{
			bureaucrat.executeForm(*form_1);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.executeForm(*form_2);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.executeForm(*form_3);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		
		std::cout << std::endl;
		try{
			bureaucrat.signForm(*form_1);		
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.signForm(*form_2);		
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.signForm(*form_3);		
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		
		std::cout << std::endl;
		try{
			bureaucrat.executeForm(*form_1);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.executeForm(*form_2);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.executeForm(*form_3);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}

		delete form_1;
		delete form_2;
		delete form_3;
	}
}
