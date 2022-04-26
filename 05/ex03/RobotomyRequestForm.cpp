#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm", 72, 45, "default_target") {
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", 72, 45, target) {
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &another)
	: Form("RobotomyRequestForm", 72, 45, another.getTarget()) {

}

RobotomyRequestForm::~RobotomyRequestForm(){

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm&){
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {	
	try{
		Form::isFormSigned();
		Form::isGradeRight(executor.getGrade(), Form::getGradeToExecute());
		
		std::cout << " [ makes some drilling noises ] " << std::endl;
		std::cout 
			<< getTarget() 
			<< " has been robotomized successfully 50% of the time"
			<< std::endl;
	} catch (std::exception &e){
		std::cout
			<< "Failure: " << e.what() << std::endl;
		throw;
	}
	
}