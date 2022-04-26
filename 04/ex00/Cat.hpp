#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat &another);
	Cat &operator=(const Cat &another);
	~Cat();

	void makeSound() const;

};

#endif
