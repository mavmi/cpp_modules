#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor" << std::endl;

	for (int i = 0; i < 100; i+=4){
		ideas[i] = "get fork";
		ideas[i + 1] = "eat";
		ideas[i + 2] = "sleep";
		ideas[i + 3] = "think";
	}
}

Brain::Brain(const Brain &another){
	std::cout << "Brain copy constructor" << std::endl;

	for (int i = 0; i < 100; i++){
		ideas[i] = another.ideas[i];
	}
}

Brain::~Brain(){
	std::cout << "Brain default destructor" << std::endl;
}

Brain &Brain::operator=(const Brain &another){
	std::cout << "Brain assignment operator" << std::endl;

	for (int i = 0; i < 100; i++){
		ideas[i] = another.ideas[i];
	}
	return *this;
}

void Brain::print_ideas() const{
	for (int i = 0; i < 100; i++){
		std::cout << ideas[i] << " ";
	}
	std::cout << std::endl;
}
