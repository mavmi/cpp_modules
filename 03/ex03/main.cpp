#include "DiamondTrap.hpp"

int main(){
	DiamondTrap diamond_trap("diamond");
	diamond_trap.whoAmI();
	diamond_trap.printInfo();

	diamond_trap.attack("bad guy");
	diamond_trap.takeDamage(99);
	diamond_trap.printInfo();

	diamond_trap.attack("aa");
	diamond_trap.takeDamage(100500);
	diamond_trap.attack("somebody");
	diamond_trap.printInfo();

	diamond_trap.beRepaired(12);
	diamond_trap.printInfo();
	diamond_trap.beRepaired(100000);
	diamond_trap.printInfo();
}
