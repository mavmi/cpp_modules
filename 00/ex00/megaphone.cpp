#include <string>
#include <iostream>

int main(int argc, char **argv){
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	std::string input;
	for (int i = 1; i < argc; ++i){
		input = argv[i];
		for (size_t j = 0; j < input.size(); ++j){
			std::cout << (char)std::toupper(input[j]);
		}
	}
	std::cout << std::endl;
	return (0);
}