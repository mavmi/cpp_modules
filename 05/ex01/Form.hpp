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

	Form();
	Form(const std::string &name, int grade_to_sign,
			int grade_to_execute);
	Form(const Form &another);
	~Form();

	Form &operator=(const Form &another);

	std::string getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;	
	void beSigned(const Bureaucrat &bureaucrat);

private:
	const std::string name;
	const int grade_to_sign;
	const int grade_to_execute;
	bool isSigned;
	
	void isGradeValid(int grade);
	void isGradeRight(int bureaucrat, int grade);
	
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif
