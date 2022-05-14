#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include <iostream>
# include <iomanip>
# include "Weapon.hpp"
class HumanB{

public:
	HumanB( std::string name , Weapon *Weapon_ptr );
	~HumanB( void );
    void attack();
    std::string name;
    Weapon *Arm;
    void change_weapon(Weapon *Weapon_ptr);
};

#endif