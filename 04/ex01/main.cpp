#include "Cat.hpp"
#include "Dog.hpp"

int main(){
	{
		std::cout << std::endl;

		const int size = 2;
		Animal *animals[size];

		animals[0] = new Dog();
		animals[1] = new Cat();

		std::cout << animals[0]->getType() << std::endl;
		std::cout << animals[1]->getType() << std::endl;

		animals[0]->makeSound();
		animals[1]->makeSound();

		for (int i = 0; i < size; ++i){
			delete animals[i];
		}
	}

	{
		std::cout << std::endl;

		Cat cat_1;
		{
			Cat cat_2 = cat_1;

			cat_1.printAddress();
			cat_2.printAddress();

			cat_2.printIdeas();
		}
		cat_1.printIdeas();
	}

	{
		std::cout << std::endl;

		Dog dog_1;
		{
			Dog dog_2 = dog_1;

			dog_1.printAddress();
			dog_2.printAddress();

			dog_2.printIdeas();
		}
		dog_1.printIdeas();
	}

	{
		std::cout << std::endl;

		Animal *animal = new Animal();
		delete animal;
	}
}
