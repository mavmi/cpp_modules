#include "Ice.hpp"

Ice::Ice()
	: AMateria("ice") {
	
}

Ice::Ice(const Ice& another)
	: AMateria(another.getType()){
	
}

Ice::~Ice(){

}

Ice& Ice::operator=(const Ice&){
	return *this;
}

AMateria* Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter &target){
	std::cout 
		<< "shoots an ice bolt at " 
		<< target.getName()  
		<< std::endl;
}
