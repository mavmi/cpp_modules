#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap default constuctor" << std::endl;

	name = "default_diamond_trap";
	setAttributes();
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name){
	std::cout << "DiamondTrap specified constuctor" << std::endl;

	setAttributes();
}

DiamondTrap::DiamondTrap(const DiamondTrap &another)
	: ClapTrap(another.name + "_clap_name"), name(another.name) {
	std::cout << "DiamondTrap copy constuctor" << std::endl;
	name = another.name;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destuctor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &another){
	name = another.name;
	return *this;
}

void DiamondTrap::attack(std::string const &target){
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount){
	ScavTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount){
	ScavTrap::beRepaired(amount);
}

void DiamondTrap::whoAmI(){
	std::cout << "DiamondTrap name: " << name << std::endl;
	std::cout << "Diamond's ClapTrap name: " << ClapTrap::name << std::endl;
}

void DiamondTrap::printInfo(){
	std::cout
		<< " >> DiamondTrap attributes: " << std::endl
		<< "\thit points: " << ClapTrap::hit_points << std::endl
		<< "\tenergy points: " << ClapTrap::energy_points << std::endl
		<< "\tattack dmg: " << ClapTrap::attack_damage << std::endl;
}

void DiamondTrap::setAttributes(){
	ClapTrap::hit_points = FragTrap::hit_points;		// 100
	ClapTrap::max_hp = ClapTrap::hit_points;
	ClapTrap::energy_points = ScavTrap::energy_points;	// 50
	ClapTrap::attack_damage = FragTrap::attack_damage;	// 30
}
