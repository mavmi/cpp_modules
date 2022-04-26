#include <iostream>

#include "span.hpp"

int main()
{	
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try{
		sp.addNumber(12);
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	{
		Span cpy = sp;
		std::cout << cpy.shortestSpan() << std::endl;
		std::cout << cpy.longestSpan() << std::endl;	
		try{
			cpy.addNumber(12);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}

	{
		Span cpy(sp);
		std::cout << cpy.shortestSpan() << std::endl;
		std::cout << cpy.longestSpan() << std::endl;
		try{
			cpy.addNumber(12);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}	
	}

	{
		Span sp(0);
		
		try{
			sp.addNumber(12);
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}

		try{
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}

		try{
			std::cout << sp.shortestSpan() << std::endl;
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}

	{
		Span sp(1);
		sp.addNumber(12);

		try{
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}

		try{
			std::cout << sp.shortestSpan() << std::endl;
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}

	{
		Span sp(50000);
		std::vector<int> v(50000);
		for (size_t i = 0; i < v.size(); i++){
			v[i] = i + 1;
		}

		sp.addNumbers(v.begin(), v.end());

		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}

	{
		Span sp(50000);
		for (int i = 0; i < 50000; i++){
			sp.addNumber(i);
		}

		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}

	{
		Span sp(1);
		std::vector<int> v;
		v.push_back(1);

		sp.addNumber(1);
		try{
			sp.addNumbers(v.begin(), v.end());
		} catch (std::exception& e){
			std::cout << e.what() << std::endl;
		}
	}
}
