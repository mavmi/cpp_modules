#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <string>
#include <iostream>

#include "Form.hpp"

class Form;

class Bureaucrat {
public:
	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	Bureaucrat();
	Bureaucrat(const Bureaucrat &anoter);
	Bureaucrat(const std::string &name, int grade);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &anoter);

	std::string getName() const;
	int getGrade() const;
	
	void increaseGrade();
	void decreaseGrade();

	void signForm(Form &form) const;

private:
	const std::string name;
	int grade;

	void checkGrade(int grade);

};

std::ostream &operator<<(std::ostream& out, const Bureaucrat &bur);

#endif
