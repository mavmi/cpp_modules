#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

#include "Brain.hpp"

class Animal{
public:
	Animal();
	Animal(const Animal &another);
	Animal &operator=(const Animal &another);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;

protected:
	std::string type;

};

#endif
