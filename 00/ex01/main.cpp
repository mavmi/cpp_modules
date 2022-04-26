#include <iostream>
#include <string>

#include "PhoneBook.hpp"

int main(){
	PhoneBook phone_book;
	std::string input, first_name, second_name, 
		nickname, phone_number, darkest_secret;

	while(1){
		std::cout << "phonebook> ";
		std::cin >> input;
		if (input == "ADD"){
			std::cout << "First name: ";
			std::cin >> first_name;

			std::cout << "Second name: ";
			std::cin >> second_name;

			std::cout << "Nickname: ";
			std::cin >> nickname;

			std::cout << "Phone number: ";
			std::cin >> phone_number;

			std::cout << "Darkest secret: ";
			std::cin >> darkest_secret;

			Contact contact(first_name, second_name,
				nickname, phone_number, darkest_secret);
			
			phone_book.Add(contact);
		} else if (input == "SEARCH"){
			phone_book.Search();
		} else if (input == "EXIT") {
			return (0);
		} else {
			std::cout 
				<< "Bad command"
				<< std::endl
				<< "Available commands: ADD, SEARCH, EXIT"
				<< std::endl;
		}
		std::cin.clear();
	}
}
