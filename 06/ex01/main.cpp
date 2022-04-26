#include <iostream>
#include <string>

struct Data {
	std::string content;
	double value;
};

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}

std::ostream &operator<<(std::ostream &out, Data &data){
	out << "Content: " << data.content << std::endl;
	out << "Value: " << data.value;
	return out;
}

int main(){
	Data data;
	data.content = "some string";
	data.value = 123.456;

	std::cout << "Original address: " << &data << std::endl;
	std::cout << data << std::endl;

	uintptr_t ptr = serialize(&data);
	Data *data_ptr = deserialize(ptr);
	std::cout << std::endl << "New address: " << data_ptr << std::endl;
	std::cout << *data_ptr << std::endl;
}
