#include <iostream>
#include <string>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void){
	srand((unsigned)time(0)); 
	int random = (std::rand() % 3) + 1;

	switch (random){
		case 1:
			std::cout << "A class created" << std::endl;
			return new A;
		case 2:
			std::cout << "B class created" << std::endl;
			return new B;
		case 3:
			std::cout << "C class created" << std::endl;
			return new C;
	}
	return nullptr;
}

void identify(Base* p){
	if (dynamic_cast<A*>(p)){
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)){
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)){
		std::cout << "C" << std::endl;
	} else {
		std::cout << "It's something else" << std::endl;
	}
}

void identify(Base& p){
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
		return;
	} catch (std::bad_cast& e){}
	
	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
		return;
	} catch (std::bad_cast& e){}
	
	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
		return;
	} catch (std::bad_cast& e){}

	std::cout << "It's something else" << std::endl;
}

int main(){
	Base *ptr = generate();
	
	identify(ptr);
	identify(*ptr);
	
	delete ptr;
}
