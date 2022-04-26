#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &another);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &another);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void printInfo();

protected:
	void setAttributes();

	std::string name;
	
	unsigned int max_hp;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int attack_damage;

};

#endif
