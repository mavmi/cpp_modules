#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low!";
}

Bureaucrat::Bureaucrat()
	: name("Default name"), grade(150) {
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &another)
	: name(another.name), grade(another.grade) {
		
}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
	: name(name) {
	checkGrade(grade);
	this->grade = grade;
}

Bureaucrat::~Bureaucrat(){
	
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &another){
	grade = another.grade;
	return *this;
}

std::string Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::increaseGrade(){
	checkGrade(grade - 1);
	grade -= 1;
}

void Bureaucrat::decreaseGrade(){
	checkGrade(grade + 1);
	grade += 1;
}

void Bureaucrat::checkGrade(int grade){
	if (grade > 150){
		throw GradeTooLowException();
	} else if (grade < 1){
		throw GradeTooHighException();
	}
}

std::ostream &operator<<(std::ostream& out, const Bureaucrat &bur){
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade();	
	return out;
}
