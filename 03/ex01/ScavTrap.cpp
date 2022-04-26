# include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap default constuctor" << std::endl;

	setAttributes();
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name) {
	std::cout << "ScavTrap specified constuctor" << std::endl;

	setAttributes();
}

ScavTrap::ScavTrap(const ScavTrap &another)
	: ClapTrap(another) {
	std::cout << "ScavTrap copy constructor" << std::endl;

	ClapTrap::name = another.name;
	ClapTrap::hit_points = another.hit_points;
	ClapTrap::max_hp = another.max_hp;
	ClapTrap::energy_points = another.energy_points;
	ClapTrap::attack_damage = another.attack_damage;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap default destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& another){
	ClapTrap::name = another.name;
	ClapTrap::hit_points = another.hit_points;
	ClapTrap::max_hp = another.max_hp;
	ClapTrap::energy_points = another.energy_points;
	ClapTrap::attack_damage = another.attack_damage;

	return *this;
}

void ScavTrap::attack(std::string const &target){
	std::cout << "ScavTrap->";
	ClapTrap::attack(target);
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::setAttributes(){
	ClapTrap::hit_points = 100;
	ClapTrap::max_hp = ClapTrap::hit_points;
	ClapTrap::energy_points = 50;
	ClapTrap::attack_damage = 20;
}
