#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &another);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap&);

	void attack(std::string const &target);

	void guardGate();

private:
	void setAttributes();

};

#endif
