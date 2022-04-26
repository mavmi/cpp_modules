#include "ScavTrap.hpp"

int main(){
	{
		ScavTrap scavtrap;
	}

	{
		std::cout << std::endl;
		
		ScavTrap scavtrap("go beyong");
	
		scavtrap.attack("bad guy");
	
		scavtrap.takeDamage(5);
		scavtrap.printInfo();
		
		scavtrap.beRepaired(4);
		scavtrap.printInfo();
		
		scavtrap.takeDamage(120);
		scavtrap.printInfo();

		scavtrap.attack("another bad guy");
		scavtrap.takeDamage(100500);

		scavtrap.beRepaired(100501);
		scavtrap.printInfo();

		scavtrap.guardGate();
	}
}
