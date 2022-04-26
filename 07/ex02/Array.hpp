#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array {
public:
	Array(){
		array = new T[0]();
		size_ = 0;	
	}
	Array(unsigned int n){
		array = new T[n]();
		size_ = n;
	}
	Array(const Array<T> &another){
		array = new T[another.size()]();
		for (unsigned int i = 0; i < another.size(); ++i){
			array[i] = another[i];
		}
		size_ = another.size();
	}
	~Array(){
		delete[] array;
	}

	Array &operator=(const Array<T> &another){
		delete[] array;
		array = new T[another.size()]();
		for (unsigned int i = 0; i < another.size(); ++i){
			array[i] = another[i];
		}
		size_ = another.size();
		return *this;
	}
	T &operator[](unsigned int pos){
		if (pos >= size()){
			throw OutOfBoundsException();
		}
		return *(array + pos);
	}
	const T &operator[](unsigned int pos) const {
		if (pos >= size()){
			throw OutOfBoundsException();
		}
		return *(array + pos);
	}

	unsigned int size() const {
		return size_;
	}

private:
	T *array;
	unsigned int size_;

	class OutOfBoundsException : public std::exception {
	public:
		virtual const char *what() const throw(){
			return "Out of bounds exception!";
		}
	};

};

#endif
