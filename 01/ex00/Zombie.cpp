#include "Zombie.hpp"

Zombie::Zombie(std::string name)
	: name (name) {

}

Zombie::~Zombie(){
	std::cout << name << " destroyed" << std::endl;
}

void Zombie::announce(){
	std::cout << name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
