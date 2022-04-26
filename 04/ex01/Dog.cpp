#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog default constructor" << std::endl;

	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &another){
	std::cout << "Dog copy constructor" << std::endl;

	type = another.type;
	brain = new Brain();
	*brain = *another.brain;
}

Dog &Dog::operator=(const Dog &another){
	std::cout << "Dog assignment operator" << std::endl;

	type = another.type;
	brain = new Brain();
	*brain = *another.brain;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog default destructor" << std::endl;

	delete brain;
}

void Dog::makeSound() const {
	std::cout << "Bark!" << std::endl;
}

void Dog::printAddress() const {
	std::cout << brain << std::endl;
}

void Dog::printIdeas() const{
	brain->print_ideas();
}
