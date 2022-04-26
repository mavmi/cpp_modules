#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern &another);
	~Intern();
	
	Intern &operator=(const Intern &another);

	Form *makeForm(std::string form_name, std::string target);
};

#endif
