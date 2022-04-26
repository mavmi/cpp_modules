#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm&);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm&);

	void execute(Bureaucrat const &executor) const;
};

#endif
