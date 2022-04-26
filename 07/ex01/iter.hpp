#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void print_func(T& a){
	std::cout << a << " ";
}

template<typename T>
void pow_and_print_func(T& a){
	T obj = a;
	std::cout << obj * obj << " ";
}

template <typename T>
void iter(T *arr, size_t size, void (*func)(T const&)){
	for (size_t i = 0; i < size; i++){
		func(arr[i]);
	}
}

#endif
