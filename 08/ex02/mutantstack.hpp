#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	MutantStack()
		: std::stack<T>() {
		
	}
	MutantStack(const MutantStack &another) {
		std::stack<T>::operator=(another);
	}
	~MutantStack(){
		
	}

	MutantStack &operator=(const MutantStack &another){
		std::stack<T>::operator=(another);
		return *this;
	}

	iterator begin(){
		return this->std::stack<T>::c.begin();
	}

	const_iterator cbegin(){
		return this->std::stack<T>::c.cbegin();
	}

	iterator end(){
		return this->std::stack<T>::c.end();
	}

	const_iterator cend(){
		return this->std::stack<T>::c.cend();
	}

	reverse_iterator rbegin(){
		return this->std::stack<T>::c.rbegin();
	}

	const_reverse_iterator crbegin(){
		return this->std::stack<T>::c.crbegin();	
	}

	reverse_iterator rend(){
		return this->std::stack<T>::c.rend();
	}

	const_reverse_iterator crend(){
		return this->std::stack<T>::c.crend();
	}

};

#endif
