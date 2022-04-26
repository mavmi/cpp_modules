#ifndef BASE_HPP
#define BASE_HPP

class Base {
public:
	Base();
	Base(const Base& another);
	virtual ~Base();

	Base& operator=(const Base& another);
	
};

#endif
