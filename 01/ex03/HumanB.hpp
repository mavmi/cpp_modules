#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB{
public:
	HumanB(std::string name);

	void setWeapon(Weapon &weapon);
	void attack();

private:
	std::string name;
	Weapon *weapon;

};

#endif
