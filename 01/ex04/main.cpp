#include <string>
#include <iostream>
#include <fstream>

int contains(std::string str, std::string substr, size_t i){
	for (; i < str.size(); ++i){
		for (size_t j = 0, k = i; j < substr.size(); ++j, ++k){
			if (str[k] != substr[j]){
				break;
			}
			if (j == substr.size() - 1){
				return i;
			}
		}
	}
	return -1;
}

int replace(std::string &str, std::string s1, std::string s2){
	size_t substr_begin = 0, substr_len = s1.size();

	size_t i = 0;
	while(1){
		if ((substr_begin = contains(str, s1, i)) == -1){
			break;
		}
		i += std::string(str.substr(0, substr_begin) + s2).size();
		str = str.substr(0, substr_begin) + s2 + str.substr(substr_begin + substr_len, str.size() - substr_begin - substr_len);
	}
	return 0;
}

int main(int argc, char **argv){	
	if (argc != 4){
		std::cout << "Bad arguments" << std::endl;
		return 1;
	}

	std::string input_file, s1, s2, tmp,
		output_file;
	input_file = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (!input_file.size() || !s1.size() || !s2.size()){
		std::cout << "Strings cannot be empty" << std::endl;
		return 1;
	}
	output_file = input_file + ".replace";

	std::ifstream in(input_file, std::ios_base::in);
	if (!in){
		std::cout << "Cannot open input file" << std::endl;
		return 1;
	}
	std::fstream out(output_file, std::ios_base::out);
	if (!out){
		std::cout << "Cannot open output file" << std::endl;
		in.close();
		return 1;
	}

	while (getline(in, tmp)){
		replace(tmp, s1, s2);
		out << tmp << std::endl;
	}

	return 0;
}