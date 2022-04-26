#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <algorithm>

class ValueNotFound : public std::exception {
public:
	virtual const char *what() const throw(){
		return "Value not found!";
	}
};

template <typename T>
typename T::iterator easyfind(T& array, int value){
	typename T::iterator iter = std::find(array.begin(), array.end(), value);
	if (iter == array.end()){
		throw ValueNotFound();
	}
	return iter;
}

#endif
