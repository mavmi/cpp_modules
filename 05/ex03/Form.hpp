#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class FormIsNotSigned : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	Form();
	Form(const std::string &name, int grade_to_sign,
			int grade_to_execute, const std::string &target);
	Form(const Form &another);
	virtual ~Form();

	Form &operator=(const Form &another);

	std::string getName() const;
	std::string getTarget() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;	
	
	void beSigned(const Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;

	void isFormSigned() const;
	void isGradeValid(int grade) const;
	void isGradeRight(int grade_to_check, int grade) const;

private:
	const std::string name;
	const std::string target;
	const int grade_to_sign;
	const int grade_to_execute;
	bool isSigned;
	
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif
