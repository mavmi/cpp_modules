#include "Zombie.hpp"

Zombie::Zombie(){

}

Zombie::Zombie(std::string name)
	: name (name) {

}

Zombie::~Zombie(){
	std::cout << name << " destroyed" << std::endl;
}

void Zombie::init(std::string name){
	this->name = name;
}

void Zombie::announce(){
	std::cout << name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
