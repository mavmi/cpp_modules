#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog default constructor" << std::endl;

	type = "Dog";
}

Dog::Dog(const Dog &another){
	std::cout << "Dog copy constructor" << std::endl;

	type = another.type;
}

Dog &Dog::operator=(const Dog &another){
	std::cout << "Dog assignment operator" << std::endl;

	type = another.type;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog default destructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Bark!" << std::endl;
}
