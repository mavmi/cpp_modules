#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
public:
	Dog();
	Dog(const Dog &another);
	Dog &operator=(const Dog &another);
	~Dog();
	
	void makeSound() const;

	void printAddress() const;
	void printIdeas() const;

private:
	Brain *brain;

};

#endif
