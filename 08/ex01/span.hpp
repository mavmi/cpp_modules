#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <algorithm>
#include <vector>
#include <iostream>

class Span{
public:
	Span();
	Span(unsigned int capacity);
	Span(const Span &another);
	~Span();

	Span &operator=(const Span &another);

	template <typename Iter>
	void addNumbers(Iter begin, Iter end){
		if (std::distance(begin, end) + array.size() > capacity){
			throw BadSize();
		}
		for (Iter it = begin; it != end; it++){
			array.push_back(*it);
		}
	}

	void addNumber(int number);
	int shortestSpan();
	int longestSpan();

private:
	unsigned int capacity;
	std::vector<int> array;

	void checkCapacity();

	class OutOfBoundsException : public std::exception {
	public:
		virtual const char *what() const throw(){
			return "Out of bounds exception!";
		}
	};

	class BadSize : public std::exception {
	public:
		virtual const char *what() const throw(){
			return "Bad array size!";
		}
	};

};

#endif
