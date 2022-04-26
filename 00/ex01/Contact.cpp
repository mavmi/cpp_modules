#include "Contact.hpp"

Contact::Contact(){
	is_empty = true;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname,
		std::string phone_number, std::string darkest_secret)
		: first_name(first_name), last_name(last_name), nickname(nickname),
			phone_number(phone_number), darkest_secret(darkest_secret) {
	is_empty = false;
}

std::string Contact::GetFirstName(){
	return first_name;
}

std::string Contact::GetLastName(){
	return last_name;
}

std::string Contact::GetNickname(){
	return nickname;
}

std::string Contact::GetPhoneNumber(){
	return phone_number;
}

std::string Contact::GetDarkestSecret(){
	return darkest_secret;
}

bool Contact::IsEmpty(){
	return is_empty;
}