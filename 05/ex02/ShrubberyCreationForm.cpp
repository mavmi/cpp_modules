#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm", 145, 137, "default_target") {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137, target) {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &another)
	: Form("ShrubberyCreationForm", 145, 137, another.getTarget()) {

}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm&){
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	Form::isFormSigned();
	Form::isGradeRight(executor.getGrade(), Form::getGradeToExecute());

	std::ofstream out;
	out.open(getTarget() + "_shrubbery");
	if (!out){
		return;
	}

	out 
		<< "     .o." 		<< std::endl
		<< "    .o.o." 		<< std::endl
		<< "   .o.o.o." 	<< std::endl
		<< "  .o.o.o.o." 	<< std::endl
		<< " .o.o.o.o.o." 	<< std::endl
		<< ".o.o.o.o.o.o." 	<< std::endl
		<< "   [_____]" 	<< std::endl
		<< "    [___] " 	<< std::endl;

	out.close();
}
