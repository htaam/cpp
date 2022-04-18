#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>
# include <iomanip>

class Contact{

public:
	Contact( void );
	~Contact( void );

	void add(void);
	void short_info(void);
	void long_info(void);
	int is_filled(void);

private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
};

#endif