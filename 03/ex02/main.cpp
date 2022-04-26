#include "FragTrap.hpp"

int main(){
	{
		FragTrap frag_trap;
	}

	std::cout << std::endl;

	FragTrap frag_trap("frag_trap");

	frag_trap.highFiveGuys();
	frag_trap.highFiveGuys();
	frag_trap.highFiveGuys();
	frag_trap.highFiveGuys();
	frag_trap.highFiveGuys();

	frag_trap.attack("guy which deserves it");
	frag_trap.takeDamage(50);
	frag_trap.printInfo();
	frag_trap.attack("some target");
	frag_trap.takeDamage(100500);
	frag_trap.printInfo();
	frag_trap.attack("one more target");
	frag_trap.beRepaired(56);
	frag_trap.printInfo();
}
