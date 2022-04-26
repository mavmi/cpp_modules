#include "Karen.hpp"

void Karen::complain(std::string level){	
	FuncPtr funcs[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	
	int lev = -1;
	lev = (level == "debug") ? 0 : lev;
	lev = (level == "info") ? 1 : lev;
	lev = (level == "warning") ? 2 : lev;
	lev = (level == "error") ? 3 : lev;

	if (lev == -1)
		return;
	(this->*(funcs[lev]))();
}

void Karen::debug(){
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(){
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(){
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
