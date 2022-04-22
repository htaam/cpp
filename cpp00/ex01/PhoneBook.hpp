#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
class PhoneBook{

public:
	PhoneBook( int a1 );
	~PhoneBook( void );
	void	add();
	void	search();
	
private:
	int count;
	Contact list[8]; 
};

#endif