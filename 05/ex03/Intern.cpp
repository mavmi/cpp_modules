#include "Intern.hpp"

Intern::Intern(){
	
}

Intern::Intern(const Intern &){
	
}

Intern::~Intern(){
	
}

Intern &Intern::operator=(const Intern &){
	return *this;
}

Form *Intern::makeForm(std::string form_name, std::string target){	
	Form *return_value = nullptr;
	
	std::string requests[3] = {
		"presidential request", 
		"robotonomy request",
		"shrubbery request"
	};
	
	Form *forms[3] = {
		new PresidentialPardonForm(target),
		new RobotomyRequestForm(target),
		new ShrubberyCreationForm(target)	
	};

	for (size_t i = 0; i < 3; ++i){
		if (form_name == requests[i]){
			return_value = forms[i];
		} else {
			delete forms[i];
		}
	}

	return return_value;
}
