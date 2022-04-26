#include "Zombie.hpp"

int main(){

	{
		Zombie first("first");
		Zombie second("second");
		Zombie third("third");
		
		first.announce();
		second.announce();
		third.announce();
	}

	{
		std::cout << std::endl;

		Zombie *zombie = newZombie("zombie");
		zombie->announce();
		delete zombie;
	}

	{
		std::cout << std::endl;

		randomChump("random zombie");
	}

	return 0;
}
