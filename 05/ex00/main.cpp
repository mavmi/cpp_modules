#include "Bureaucrat.hpp"

int main(){
	{
		try {
			Bureaucrat("name", 151);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		try {
			Bureaucrat("name", 0);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		Bureaucrat bob ("Bob", 12);
		std::cout << bob << std::endl;

		std::cout << bob.getName() << " " << bob.getGrade() << std::endl;
	
		bob.increaseGrade();
		std::cout << bob << std::endl;

		bob.decreaseGrade();
		bob.decreaseGrade();
		std::cout << bob << std::endl;

		try {
			for (int i = 0; i < 13; ++i){
				bob.increaseGrade();
			}
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}
