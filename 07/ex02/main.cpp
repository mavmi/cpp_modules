#include <iostream>
#include <string>

#include "Array.hpp"

#define MAX_VAL 750

template <typename T>
void print_array(Array<T> &arr){
	for (unsigned int i = 0; i < arr.size(); ++i){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main(){

	{
		Array<int> array;
		std::cout << array.size() << std::endl;
	}

	{
		Array<int> array(5);
		
		std::cout << "size: " << array.size() << std::endl;		
		print_array(array);

		try{
			std::cout << array[5] << std::endl;
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}

		try{
			std::cout << array[3] << std::endl;
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}

		for (unsigned int i = 0; i < array.size(); ++i){
			array[i] = static_cast<int>(i);
		}
		print_array(array);


		Array<int> another_array = array;
		std::cout << "orig: ";
		print_array(array);
		std::cout << "copy: ";
		print_array(another_array);

		for (unsigned int i = 0; i < array.size(); ++i){
			array[i] *= 2;
		}
		std::cout << "orig: ";
		print_array(array);
		std::cout << "copy: ";
		print_array(another_array);


		Array<int> one_more_array(array);
		std::cout << "orig: ";
		print_array(array);
		std::cout << "one more copy: ";
		print_array(one_more_array);

		for (unsigned int i = 0; i < array.size(); ++i){
			array[i] *= 2;
		}
		std::cout << "orig: ";
		print_array(array);
		std::cout << "one more copy: ";
		print_array(one_more_array);
	}

	{
		std::cout << std::endl;

		Array<std::string> array(5);
		
		std::cout << "size: " << array.size() << std::endl;		
		print_array(array);

		try{
			std::cout << array[5] << std::endl;
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}

		try{
			std::cout << array[3] << std::endl;
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}

		std::string text = "text_";
		for (unsigned int i = 0; i < array.size(); ++i){
			text[4] = '0' + i;
			array[i] = text;
		}
		print_array(array);


		Array<std::string> another_array = array;
		std::cout << "orig: ";
		print_array(array);
		std::cout << "copy: ";
		print_array(another_array);

		for (unsigned int i = 0; i < array.size(); ++i){
			array[i][4] += 1;
		}
		std::cout << "orig: ";
		print_array(array);
		std::cout << "copy: ";
		print_array(another_array);


		Array<std::string> one_more_array(array);
		std::cout << "orig: ";
		print_array(array);
		std::cout << "one more copy: ";
		print_array(one_more_array);

		for (unsigned int i = 0; i < array.size(); ++i){
			array[i][4] += 1;
		}
		std::cout << "orig: ";
		print_array(array);
		std::cout << "one more copy: ";
		print_array(one_more_array);
	}

	{
		std::cout << std::endl;

		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
		return 0;
	}
}
