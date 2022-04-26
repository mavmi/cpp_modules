#include "ClapTrap.hpp"

int main(){
	ClapTrap first("for the glory");

	first.attack("bad guy");
	
	first.takeDamage(5);
	first.printInfo();
	
	first.beRepaired(4);
	first.printInfo();
	
	first.takeDamage(120);
	first.printInfo();

	first.attack("another bad guy");
	first.takeDamage(100500);

	first.beRepaired(100501);
	first.printInfo();
}
