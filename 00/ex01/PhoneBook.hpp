#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define USERS_COUNT 8
# define STR_LEN 10

# include <iostream>

# include "Contact.hpp"

class PhoneBook{
public:
	PhoneBook();
	
	void Add(Contact contact);
	void Search();

private:
	int last_added;
	int users_count;
	Contact contacts[USERS_COUNT];

	void PrintString_(std::string str);

};

#endif
