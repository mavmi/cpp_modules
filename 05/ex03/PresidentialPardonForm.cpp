#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardonForm", 25, 5, "default_target") {
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PresidentialPardonForm", 25, 5, target) {
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &another)
	: Form("PresidentialPardonForm", 25, 5, another.getTarget()) {

}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm&){
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	Form::isFormSigned();
	Form::isGradeRight(executor.getGrade(), Form::getGradeToExecute());

	std::cout 
		<< getTarget()
		<< " has been pardoned by Zafod Beeblebrox" 
		<< std::endl;	
}
