#include "Form.hpp"

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade too high!";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade too low!";
}

Form::Form()
	: name("default name"), grade_to_sign(150),
		grade_to_execute(150), isSigned(false) {

}

Form::Form(const std::string &name, int grade_to_sign,
			int grade_to_execute)
	: name(name), grade_to_sign(grade_to_sign),
		grade_to_execute(grade_to_execute), isSigned(false) {

}

Form::Form(const Form &another)
	: name(another.name),
		grade_to_sign(another.grade_to_sign),
		grade_to_execute(another.grade_to_execute),
		isSigned(another.isSigned) {
	
}

Form::~Form(){
	
}

Form &Form::operator=(const Form &another){
	isSigned = another.isSigned;
	return *this;
}

std::string Form::getName() const {
	return name;
}

bool Form::getIsSigned() const {
	return isSigned;
}

int Form::getGradeToSign() const {
	return grade_to_sign;
}

int Form::getGradeToExecute() const {
	return grade_to_execute;
}

void Form::beSigned(const Bureaucrat &bureaucrat){
	isGradeRight(bureaucrat.getGrade(), grade_to_sign);
	isSigned = true;
}

void Form::isGradeValid(int grade){
	if (grade > 150){
		throw GradeTooLowException();
	} else if (grade < 1){
		throw GradeTooHighException();
	}
}

void Form::isGradeRight(int bureaucrat_grade, int grade){
	if (bureaucrat_grade > grade){
		throw GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &out, const Form &form){
	out << std::boolalpha <<
		"form name: " << form.getName() << std::endl <<
		"grade to sign: " << form.getGradeToSign() << std::endl <<
		"grade to execute: " << form.getGradeToExecute() << std::endl <<
		"is signed: " << form.getIsSigned();
	return out;
}
