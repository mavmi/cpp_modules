#include <string>
#include <iostream>

int main(){
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "string address: " << &str << std::endl;
	std::cout << "address from ptr: " << stringPTR << std::endl;
	std::cout << "address from ref: " << &stringREF << std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}