#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &another);
	WrongAnimal &operator=(const WrongAnimal &another);
	~WrongAnimal();

	void makeSound() const;
	std::string getType() const;

protected:
	std::string type;
};

#endif
