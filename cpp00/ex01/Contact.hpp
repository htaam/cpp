#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact{

public:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;

	Contact( void );
	~Contact( void );
};

#endif