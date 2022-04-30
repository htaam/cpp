#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include <iostream>
# include <iomanip>
# include "Weapon.hpp"
class HumanA{

public:
	HumanA( std::string name , Weapon &weapon );
	~HumanA( void );
    void attack();
    Weapon Arm;
    std::string name;
};

#endif