#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;

	fixed_point_value = 0;
}

Fixed::Fixed(const Fixed &another){
	std::cout << "Copy constructor called" << std::endl;

	this->fixed_point_value = another.getRawBits();
}

Fixed::~Fixed(){
	std::cout << "Default destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &another){
	std::cout << "Assignation operator called" << std::endl;
	
	this->fixed_point_value = another.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;

	return fixed_point_value;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;

	fixed_point_value = raw;
}
