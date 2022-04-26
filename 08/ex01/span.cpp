#include "span.hpp"

Span::Span(){
	capacity = 0;
}

Span::Span(unsigned int capacity){
	this->capacity = capacity;
	array.reserve(capacity);
}

Span::Span(const Span &another){
	capacity = another.capacity;
	array.reserve(capacity);

	for (size_t i = 0; i < another.array.size(); i++){
		array.push_back(another.array[i]);
	}
}

Span::~Span(){}

Span &Span::operator=(const Span &another){
	capacity = another.capacity;
	array.resize(0);
	array.reserve(capacity);

	for (size_t i = 0; i < another.array.size(); i++){
		array.push_back(another.array[i]);
	}

	return *this;
}

void Span::addNumber(int number){
	if (array.size() == static_cast<size_t>(capacity)){
		throw OutOfBoundsException();
	}

	array.push_back(number);
}

int Span::shortestSpan(){
	checkCapacity();
	
	std::vector<int>::iterator min = std::min_element(array.begin(), array.end());

	std::vector<int>::iterator first = std::min_element(array.begin(), min);
	std::vector<int>::iterator second = std::min_element(std::next(min), array.end());

	int max;
	if (first != min && second != array.end()){
		max = (*first < *second) ? *first : *second;
	} else if (first == min && second != array.end()){
		max = *second;
	} else {
		max = *first;
	}
	
	return (max - *min);
}

int Span::longestSpan(){
	checkCapacity();
	
	int min = *std::min_element(array.begin(), array.end());
	int max = *std::max_element(array.begin(), array.end());
	
	return (max - min);
}

void Span::checkCapacity(){
	if (array.size() == 1 || array.size() == 0){
		throw BadSize();
	}
}
