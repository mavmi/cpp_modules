#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: name(name) {
	
}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}

void HumanB::attack(){
	if (weapon){
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
	}
		
}
	