#include <iostream>
#include <string>

#include "whatever.hpp"

int main(){
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	{
		std::cout << std::endl;

		double a = 2.2, b = 3.3;
		std::cout << a << " " << b << std::endl;
		
		swap(a, b);
		std::cout << a << " " << b << std::endl;

		std::cout << "min: " << min(a, b) << std::endl;
		std::cout << "min: " << min(b, a) << std::endl;
		std::cout << "max: " << max(a, b) << std::endl;
		std::cout << "max: " << max(b, a) << std::endl;
	}

	{
		std::cout << std::endl;

		std::string a = "a", b = "b";
		std::cout << a << " " << b << std::endl;
		
		swap(a, b);
		std::cout << a << " " << b << std::endl;

		std::cout << "min: " << min(a, b) << std::endl;
		std::cout << "min: " << min(b, a) << std::endl;
		std::cout << "max: " << max(a, b) << std::endl;
		std::cout << "max: " << max(b, a) << std::endl;
	}

	{
		std::cout << std::endl;

		int a = 2;
		int b = 2;
		std::cout << "a: " << &a << std::endl;
		std::cout << "b: " << &b << std::endl;
		std::cout << &min(b, a) << std::endl;
		std::cout << &min(a, b) << std::endl;
	}
}
