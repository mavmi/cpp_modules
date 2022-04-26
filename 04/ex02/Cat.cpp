#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat default constructor" << std::endl;

	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &another){
	std::cout << "Cat copy constructor" << std::endl;

	type = another.type;
	brain = new Brain();
	*brain = *another.brain;
}

Cat &Cat::operator=(const Cat &another){
	std::cout << "Cat assignment operator" << std::endl;

	type = another.type;
	brain = new Brain();
	*brain = *another.brain;
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat default destructor" << std::endl;

	delete brain;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

void Cat::printAddress() const {
	std::cout << brain << std::endl;
}
