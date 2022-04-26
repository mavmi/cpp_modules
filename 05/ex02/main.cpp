#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
	{
		Bureaucrat bureaucrat("Bob", 1);

		ShrubberyCreationForm form_1("target");
		RobotomyRequestForm form_2("target");
		PresidentialPardonForm form_3("target");

		
		try{
			bureaucrat.executeForm(form_1);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.executeForm(form_2);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.executeForm(form_3);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;		
		try{
			bureaucrat.signForm(form_1);		
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.signForm(form_2);		
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.signForm(form_3);		
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;
		try{
			bureaucrat.executeForm(form_1);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.executeForm(form_2);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.executeForm(form_3);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << std::endl;

		Bureaucrat bureaucrat("Bob", 55);

		ShrubberyCreationForm form_1("target_1");
		RobotomyRequestForm form_2("target_1");
		PresidentialPardonForm form_3("target");

		std::cout << "***************************" << std::endl << std::endl;		
		try{
			bureaucrat.executeForm(form_1);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.executeForm(form_2);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.executeForm(form_3);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		
		std::cout << std::endl;
		try{
			bureaucrat.signForm(form_1);		
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.signForm(form_2);		
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.signForm(form_3);		
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		
		std::cout << std::endl;
		try{
			bureaucrat.executeForm(form_1);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.executeForm(form_2);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			bureaucrat.executeForm(form_3);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
}
