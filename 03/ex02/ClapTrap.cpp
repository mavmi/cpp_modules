#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap default constuctor" << std::endl;

	name = "default";
	setAttributes();
}

ClapTrap::ClapTrap(std::string name)
	: name(name) {
	std::cout << "ClapTrap specified constuctor" << std::endl;

	setAttributes();		
}

ClapTrap::ClapTrap(const ClapTrap &another){
	std::cout << "ClapTrap copy constructor" << std::endl;

	max_hp = another.max_hp;
	hit_points = another.hit_points;
	energy_points = another.energy_points;
	attack_damage = another.attack_damage;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap default destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &another){
	std::cout << "ClapTrap assignment operator" << std::endl;
	
	max_hp = another.max_hp;
	hit_points = another.hit_points;
	energy_points = another.energy_points;
	attack_damage = another.attack_damage;
	return *this;
}

void ClapTrap::attack(std::string const &target){
	if (!hit_points){
		std::cout << "ClapTrap " << name << " is dead! It can not attack!" << std::endl;
		return;
	}
	
	std::cout
		<< "ClapTrap "
		<< name
		<< " attack "
		<< target
		<< ", causing "
		<< attack_damage
		<< " points of damage!"
		<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (!hit_points){
		std::cout << "ClapTrap " << name << " is already dead" << std::endl;
		return;
	}
	
	std::cout
		<< "ClapTrap got "
		<< amount
		<< " points of damage!"
		<< std::endl;

	if (amount > hit_points){
		hit_points = 0;
	} else {
		hit_points -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout
		<< "ClapTrap " << name 
		<< " got " << amount 
		<< " hp points!"
		<< std::endl;

	hit_points += amount;
	if (hit_points > max_hp){
		hit_points = max_hp;
	}
}

void ClapTrap::printInfo(){
	std::cout 
		<< " >> " << name << " states:" << std::endl
		<< " >> " << "Hitpoints: " << hit_points << std::endl
		<< " >> " << "Energy points: " << energy_points << std::endl
		<< " >> " << "Attack damage: " << attack_damage << std::endl
		<< std::endl;
}

void ClapTrap::setAttributes(){
	hit_points = 10;
	max_hp = hit_points;
	energy_points = 10;
	attack_damage = 0;	
}
