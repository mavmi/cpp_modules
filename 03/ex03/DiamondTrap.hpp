#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &another);
	~DiamondTrap();

	DiamondTrap &operator=(const DiamondTrap &another);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void whoAmI();

	void printInfo();
	
private:
	void setAttributes();
	
	std::string name;
	
};

#endif
