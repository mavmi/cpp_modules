#include <iostream>
#include <string>

#include "iter.hpp"

int main(){
	{
		int a[5] = {1, 2, 3, 4, 5};
		
		iter(a, 5, print_func);
		std::cout << std::endl;

		iter(a, 5, pow_and_print_func);
		std::cout << std::endl;
	}
}
