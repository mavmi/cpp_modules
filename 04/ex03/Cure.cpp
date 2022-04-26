#include "Cure.hpp"

Cure::Cure()
	: AMateria("cure") {
	
}

Cure::Cure(const Cure& another)
	: AMateria(another.getType()){
	
}

Cure::~Cure(){
	
}

Cure& Cure::operator=(const Cure&){
	return *this;
}

AMateria* Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter &target){
	std::cout 
		<< "heals " 
		<< target.getName() 
		<< " wounds" 
		<< std::endl;
}
