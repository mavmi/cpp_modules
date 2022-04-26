#include <cmath>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <iostream>

enum STATE {
    M_INF,
    P_INF,
    NAN_,
    NONE
};

bool is_digit(char c){
	if (c >= 48 && c <= 57){
		return true;
	}
	return false;
}

bool is_valid_number(std::string& str){
	if (str.size() == 1 ||
			str == "nan" || str == "nanf" ||
			str == "+inf" || str == "+inff" ||
			str == "-inf" || str == "-inff"){
		return true;
	}

	int dots = 0;
	size_t size = str.size();

	for (size_t i = 0; i < size; ++i){
		char c = str[i];
		if (!is_digit(c) && (
			(c != '-' && i == 0) || 
			(c != '.' && i > 0 && i + 1 != size) ||
			(c != 'f' && i + 1 == size)
		)){
			return false;
		}
		if (c == '.'){
			dots++;
			if (dots > 1 || !is_digit(str[i + 1])){
				return false;
			}
		}
	}
	return true;
}

bool is_displayable(int c){
    return (c >= 32 && c <= 126);
}

STATE get_state(double value){
    if (value == std::numeric_limits<double>::infinity()){
        return P_INF;
    } else if (value == -std::numeric_limits<double>::infinity()){
        return M_INF;
    } else if (std::isnan(value)){
        return NAN_;
    } else {
        return NONE;
    }
}

void print_char(double value, STATE value_state){
    std::cout << "char: ";

    if (value_state != NONE){
        std::cout << "impossible" << std::endl;
        return;
    }

    char c = static_cast<char>(value);
    if (!is_displayable(c)){
        std::cout << "Non displayable" << std::endl;
        return;
    }

    std::cout << c << std::endl;
}

void print_int(double value, STATE value_state){
    std::cout << "int: ";

    if (value_state != NONE){
        std::cout << "impossible" << std::endl;
        return;
    }

    int c = static_cast<int>(value);
    std::cout << c << std::endl;
}

void print_float(double value, STATE value_state){
    std::cout << "float: ";

    if (value_state == P_INF){
        std::cout << "+inff" << std::endl;
    } else if (value_state == M_INF){
        std::cout << "-inff" << std::endl;
    } else if (value_state == NAN_){
        std::cout << "nanf" << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    }
}

void print_double(double value, STATE value_state){
    std::cout << "double: ";

    if (value_state == P_INF){
        std::cout << "+inf" << std::endl;
    } else if (value_state == M_INF){
        std::cout << "-inf" << std::endl;
    } else if (value_state == NAN_){
        std::cout << "nan" << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
    }
}

int main(int argc, char **argv){
    if (argc != 2){
        return 1;
    }

	std::string number(argv[1]);
	if (!is_valid_number(number)){
		std::cout << "Bad input" << std::endl;
		return 1;
	}
	double value;
	if (number.size() == 1 && !is_digit(number[0])){
     	value = static_cast<double>(number[0]);
	} else {
		value = std::stod(number);
	}

    STATE value_state = get_state(value);
    print_char(value, value_state);
    print_int(value, value_state);
    print_float(value, value_state);
    print_double(value, value_state);
}
