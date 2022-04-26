#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal default constructor" << std::endl;

	type = "default";
}

WrongAnimal::WrongAnimal(const WrongAnimal &another){
	std::cout << "WrongAnimal copy constructor" << std::endl;

	type = another.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &another){
	std::cout << "WrongAnimal assignment operator" << std::endl;

	type = another.type;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal default destructor" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << " [wrong animal scary noises...] " << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}
