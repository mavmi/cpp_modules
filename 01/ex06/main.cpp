#include "Karen.hpp"

int main(int argc, char **argv){
	if (argc != 2){
		return 1;
	}

	int lev = -1;
	std::string level = argv[1];
	lev = (level == "DEBUG") ? 0 : lev;
	lev = (level == "INFO") ? 1 : lev;
	lev = (level == "WARNING") ? 2 : lev;
	lev = (level == "ERROR") ? 3 : lev;

	Karen karen;
	switch (lev)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			karen.complain("debug");

			std::cout << "[ INFO ]" << std::endl;
			karen.complain("info");	

			std::cout << "[ WARNING ]" << std::endl;
			karen.complain("warning");	

			std::cout << "[ ERROR ]" << std::endl;
			karen.complain("error");	

			break;

		case 1:
			std::cout << "[ INFO ]" << std::endl;
			karen.complain("info");	

			std::cout << "[ WARNING ]" << std::endl;
			karen.complain("warning");	

			std::cout << "[ ERROR ]" << std::endl;
			karen.complain("error");

			break;

		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			karen.complain("warning");	

			std::cout << "[ ERROR ]" << std::endl;
			karen.complain("error");	

			break;

		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			karen.complain("error");	

			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}