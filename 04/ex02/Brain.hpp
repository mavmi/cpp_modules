#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain{
public:
	Brain();
	Brain(const Brain &another);
	~Brain();

	Brain &operator=(const Brain &another);

private:
	std::string ideas[100];

};

#endif
