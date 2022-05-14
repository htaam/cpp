#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include <iostream>
# include <iomanip>
# include "Weapon.hpp"
class HumanA{

public:
	HumanA( std::string name , Weapon &weapon_ref);
	~HumanA( void );
    void attack();
    std::string name;
    Weapon &Arm_ref;

};

#endif