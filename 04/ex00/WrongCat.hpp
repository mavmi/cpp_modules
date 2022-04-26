#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &another);
	WrongCat &operator=(const WrongCat &another);
	~WrongCat();

	void makeSound() const;

};

#endif
