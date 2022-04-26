#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat default constructor" << std::endl;

	type = "Cat";
}

Cat::Cat(const Cat &another){
	std::cout << "Cat copy constructor" << std::endl;

	type = another.type;
}

Cat &Cat::operator=(const Cat &another){
	std::cout << "Cat assignment operator" << std::endl;

	type = another.type;
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat default destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
