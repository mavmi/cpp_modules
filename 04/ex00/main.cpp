#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();

	std::cout << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();
	std::cout << wrong_animal->getType() << std::endl;
	std::cout << wrong_cat->getType() << std::endl;
	wrong_cat->makeSound();
	wrong_animal->makeSound();

	delete meta;
	delete i;
	delete j;
	delete wrong_animal;
	delete wrong_cat;
}