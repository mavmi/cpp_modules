#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact{
public:
	Contact();
	Contact(std::string first_name,	std::string last_name, 	std::string nickname,
		std::string phone_number, std::string darkest_secret);

	std::string GetFirstName();
	std::string GetLastName();
	std::string GetNickname();
	std::string GetPhoneNumber();
	std::string GetDarkestSecret();

	bool IsEmpty();

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	bool is_empty;
	
};

#endif
