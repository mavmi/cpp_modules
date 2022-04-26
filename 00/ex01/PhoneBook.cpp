#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	last_added = -1;
	users_count = 0;
}

void PhoneBook::Add(Contact contact){
	if (!contact.IsEmpty()){
		if (users_count < USERS_COUNT)
			users_count++;
		if (last_added == USERS_COUNT - 1)
			last_added = -1;
		last_added++;
		contacts[last_added] = contact;
	}
}

void PhoneBook::Search(){
	if (users_count == 0){
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}

	std::string tmp;
	int id_to_show;

	PrintString_("index");
	std::cout << '|';
	PrintString_("first name");
	std::cout << '|';
	PrintString_("last name");
	std::cout << '|';
	PrintString_("nickname");
	std::cout << '|' << std::endl;
	
	for (int i = 0; i < USERS_COUNT; ++i){
		if (contacts[i].IsEmpty()){
			continue;
		}
		
		PrintString_(std::to_string(i));
		std::cout << '|';

		PrintString_(contacts[i].GetFirstName());
		std::cout << '|';

		PrintString_(contacts[i].GetLastName());
		std::cout << '|';

		PrintString_(contacts[i].GetNickname());
		std::cout << std::endl;
	}

	id_to_show = -1;
	std::cout << "enter id: ";
	std::cin >> id_to_show;

	if (id_to_show < 0 || id_to_show >= users_count){
		std::cin.clear();
		std::cout << "Invalid id" << std::endl;
		return;
	}
	
	std::cout << "First name: " << contacts[id_to_show].GetFirstName() << std::endl;
	std::cout << "Last name: " << contacts[id_to_show].GetLastName() << std::endl;
	std::cout << "Nickname: " << contacts[id_to_show].GetNickname() << std::endl;
	std::cout << "Phone number: " << contacts[id_to_show].GetPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[id_to_show].GetDarkestSecret() << std::endl;
}

void PhoneBook::PrintString_(std::string str){
	if (str.size() == STR_LEN){
		std::cout << str;
	} else if (str.size() < STR_LEN){
		std::cout << std::string(STR_LEN - str.size(), ' ') << str;
	} else {
		std::cout << str.substr(0, STR_LEN - 1) << '.';
	}
}
