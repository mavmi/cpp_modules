#include "AMateria.hpp"

AMateria::AMateria(){
	this->type = "Default AMateria type";
	
	std::cout << type << " default constuctor" << std::endl;
}

AMateria::AMateria(std::string const &type){
	this->type = type;

	std::cout << type << " specified constuctor" << std::endl;
}

AMateria::AMateria(const AMateria&){
	std::cout << type << " copy constuctor" << std::endl;
}

AMateria::~AMateria(){
	std::cout << type << " default destuctor" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &another){
	type = another.type;

	std::cout << type << " assignment operator" << std::endl;
	return *this;
}

std::string const &AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter &target){	
	(void)target;
}
