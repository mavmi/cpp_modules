#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal default constructor" << std::endl;

	type = "default";
}

Animal::Animal(const Animal &another){
	std::cout << "Animal copy constructor" << std::endl;

	type = another.type;
}

Animal &Animal::operator=(const Animal &another){
	std::cout << "Animal assignment operator" << std::endl;

	type = another.type;
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal default destructor" << std::endl;
}

void Animal::makeSound() const {
	std::cout << " [some animal sounds] " << std::endl;
}

std::string Animal::getType() const {
	return type;
}
