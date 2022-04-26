#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void init(std::string name);
	void announce();

private:
	std::string name;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif