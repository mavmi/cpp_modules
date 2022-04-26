#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(){
	{
		std::cout << std::endl;

		AMateria *ice = new Ice();
		std::cout << ice->getType() << std::endl;

		delete ice;
	}

	{
		std::cout << std::endl;

		AMateria *cure = new Cure();
		std::cout << cure->getType() << std::endl;

		delete cure;
	}

	{
		std::cout << std::endl;

		AMateria *cure = new Cure();
		AMateria *new_cure = cure->clone();
		std::cout << cure->getType() << std::endl;
		std::cout << new_cure->getType() << std::endl;
		std::cout << cure << std::endl;
		std::cout << new_cure << std::endl;

		delete cure;
		delete new_cure;
	}

	{
		std::cout << std::endl;

		ICharacter *bad_guy = new Character();
		ICharacter *character = new Character("Bob");
		std::cout << bad_guy->getName() << std::endl;
		std::cout << character->getName() << std::endl;

		AMateria *ice = new Ice();
		AMateria *cure = new Cure();

		character->equip(ice);
		character->equip(cure);

		character->use(100, *bad_guy);
		character->use(-1, *bad_guy);

		character->use(0, *bad_guy);
		character->use(1, *character);

		delete bad_guy;
		delete character;
	}

	{
		std::cout << std::endl;

		IMateriaSource* src = new MateriaSource();
		
		AMateria *materia = new Ice();
		src->learnMateria(materia);
		delete materia;

		materia = new Cure();
		src->learnMateria(materia);
		delete materia;

		ICharacter* me = new Character("me");
		
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);

		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
}
