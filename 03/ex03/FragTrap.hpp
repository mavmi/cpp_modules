#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &another);
	~FragTrap();

	FragTrap &operator=(const FragTrap&);

	void highFiveGuys();


protected:
	static int high_fives;
	unsigned int max_hp;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int attack_damage;
	
	void setAttributes();

};

#endif
