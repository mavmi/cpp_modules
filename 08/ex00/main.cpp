#include <iostream>
#include <vector>

#include "easyfind.hpp"

int main(){
	{
		std::vector<int> arr;
		for (int i = 1; i < 6; ++i){
			arr.push_back(i);
		}
		
		try{
			std::cout << *easyfind(arr, 1) << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try{
			std::cout << *easyfind(arr, 123) << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::vector<double> arr;
		for (int i = 1; i < 6; ++i){
			arr.push_back(static_cast<double>(i + 0.5));
		}
		
		try{
			std::cout << *easyfind(arr, 1) << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}
