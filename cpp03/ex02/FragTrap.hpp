#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{

public:
	FragTrap(  const std::string n );
    FragTrap( const FragTrap &copy);
	~FragTrap( void ); 

    FragTrap & operator=(const FragTrap &op);

    void highFivesGuy();
private:

};

#endif