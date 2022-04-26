#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm&);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(const RobotomyRequestForm&);

	void execute(Bureaucrat const &executor) const;
};

#endif
