#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	Dog(const Dog &another);
	Dog &operator=(const Dog &another);
	~Dog();
	
	void makeSound() const;

};

#endif
