#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &another);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap&);

	void attack(std::string const &target);

	void guardGate();

protected:
	void setAttributes();
	
	unsigned int max_hp;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int attack_damage;

};

#endif
