#include "FragTrap.hpp"

int FragTrap::high_fives = 0;

FragTrap::FragTrap(){
	std::cout << "FragTrap default constuctor" << std::endl;

	setAttributes();
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name) {
	std::cout << "FragTrap specified constuctor" << std::endl;

	setAttributes();
}

FragTrap::FragTrap(const FragTrap &another)
	: ClapTrap(another) {
	std::cout << "FragTrap copy constuctor" << std::endl;

	name = another.name;
	max_hp = another.max_hp;
	hit_points = another.hit_points;
	energy_points = another.energy_points;
	attack_damage = another.attack_damage;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap default destuctor" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& another){
	name = another.name;
	max_hp = another.max_hp;
	hit_points = another.hit_points;
	energy_points = another.energy_points;
	attack_damage = another.attack_damage;

	return *this;
}

void FragTrap::highFiveGuys(){
	high_fives++;
	std::cout << "High fives: " << high_fives << std::endl;
}

void FragTrap::setAttributes(){
	hit_points = 100;
	max_hp = ClapTrap::hit_points;
	energy_points = 100;
	attack_damage = 30;
}
