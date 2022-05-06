#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include <iostream>
# include <iomanip>
# include "Weapon.hpp"
class HumanA{

public:
	HumanB( std::string name );
	~HumanB( void );
    void attack();
    Weapon Arm;
    std::string name;
};

#endif