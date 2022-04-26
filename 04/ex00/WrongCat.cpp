#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat default constructor" << std::endl;

	type = "Wrong cat";
}

WrongCat::WrongCat(const WrongCat &another){
	std::cout << "WrongCat copy constructor" << std::endl;

	type = another.type;
}

WrongCat &WrongCat::operator=(const WrongCat &another){
	std::cout << "WrongCat assignment operator" << std::endl;

	type = another.type;
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat default destructor" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Wrong meow!" << std::endl;
}
