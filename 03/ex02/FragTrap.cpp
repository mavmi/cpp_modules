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

	ClapTrap::name = another.name;
	ClapTrap::max_hp = another.max_hp;
	ClapTrap::hit_points = another.hit_points;
	ClapTrap::energy_points = another.energy_points;
	ClapTrap::attack_damage = another.attack_damage;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap default destuctor" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& another){
	ClapTrap::name = another.name;
	ClapTrap::max_hp = another.max_hp;
	ClapTrap::hit_points = another.hit_points;
	ClapTrap::energy_points = another.energy_points;
	ClapTrap::attack_damage = another.attack_damage;

	return *this;
}

void FragTrap::highFiveGuys(){
	high_fives++;
	std::cout << "High fives: " << high_fives << std::endl;
}

void FragTrap::setAttributes(){
	ClapTrap::hit_points = 100;
	ClapTrap::max_hp = ClapTrap::hit_points;
	ClapTrap::energy_points = 100;
	ClapTrap::attack_damage = 30;
}
