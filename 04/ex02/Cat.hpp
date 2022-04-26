#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat &another);
	Cat &operator=(const Cat &another);
	~Cat();

	void makeSound() const;

	void printAddress() const;

private:
	Brain *brain;

};

#endif
