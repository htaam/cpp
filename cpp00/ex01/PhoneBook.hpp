#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
class PhoneBook{

public:
	PhoneBook( int a1 );
	~PhoneBook( void );
	void	add(void);
	void	search(void);
	
private:
	int count;
	Contact list[8];
	void	display_all_small(void);
	void	display_one_full(void);
};

#endif